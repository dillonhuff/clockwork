/* Copyright (C) 2004 and 2005 Chris Vine

 The following code declares classes to read from and write to
 Unix file descriptors.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public License
   as published by the Free Software Foundation; either version 2.1 of
   the License, or (at your option) any later version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library (see the file LGPL.TXT which came
   with this source code package); if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
   02111-1307, USA.

*/

#include <unistd.h>
#include <errno.h>
#include "fdstream.h"

// fdopen() and fileno() are not in the C standard, so declare them here in case they are
// not in <cstdio> (in a POSIX conforming implementation they will be declared in <stdio.h>
// and will be linkable from the C library)
extern "C" std::FILE* fdopen(int, const char*);
#ifndef fileno
extern "C" int fileno(std::FILE*);
#endif

fdoutbuf::fdoutbuf(): stream_p(0) {
  error_condition.error = false;
}

fdoutbuf::fdoutbuf(int fd, bool manage): stream_p(0) {
  attach_fd(fd, manage);
}

fdoutbuf::~fdoutbuf() {
  if (stream_p) {
    while (std::fclose(stream_p) == EOF && errno == EINTR); // this will flush the buffer
  }
}


int fdoutbuf::attach_fd(int fd, bool manage) {
  int return_val = 0;
  if (stream_p) {
    while (std::fclose(stream_p) == EOF && errno == EINTR); // this will flush the buffer
  }
  error_condition.error = false;
  if (fd >= 0) {
    // duplicate the file descriptor if we are not managing it
    if (!manage) fd = dup(fd);
    if (fd == -1) {
      error_condition.error = true;
      error_condition.code = fdstream_error::dup;
      return_val = -1;
    }      
    else {
      stream_p = fdopen(fd, "w");
      if (!stream_p) {
	error_condition.error = true;
	error_condition.code = fdstream_error::open;
	return_val = -1;
      }
    }
  }  
  return return_val;
}

// the standard requires sync to return 0 for success and -1 for error
int fdoutbuf::sync() {
  if (!stream_p) return -1;
  int result;
  do {
    result = std::fflush(stream_p);
  } while (result == EOF && errno == EINTR);

  if (result == EOF) {
    error_condition.error = true;
    error_condition.code = fdstream_error::flush;
    return -1;
  }
  return 0;
}

void fdoutbuf::close_filestream() {
  if(stream_p) {
    while (std::fclose(stream_p) == EOF && errno == EINTR); // this will flush the buffer
  }
  stream_p = 0;
  error_condition.error = false;
}

int fdoutbuf::get_fd() const {
  if (!stream_p) return -1;
  return fileno(stream_p);
}

// the standard requires this to return either the character
// written on overflow or traits_type::eof() (= EOF with char_type == char)
fdoutbuf::traits_type::int_type fdoutbuf::overflow(int_type c) {
  if (!traits_type::eq_int_type(c, traits_type::eof())) {
    int result;
    do {
      result = std::fputc(c, stream_p);
    } while (result == EOF && errno == EINTR);

    if (result == EOF) {
      error_condition.error = true;
      error_condition.code = fdstream_error::eof;
      return traits_type::eof();
    }
  }
  return traits_type::not_eof(c);
}

// the standard requires this to return the number of characters written
// (which will be 0 for stream failure - it is not correct to return EOF)
std::streamsize fdoutbuf::xsputn(const char* source, std::streamsize num) {

  std::streamsize remaining = num;
  std::streamsize result;
  do {
    result = std::fwrite(source, sizeof(char), remaining, stream_p);
    source += result;
    remaining -= result;
  } while (remaining && (result || errno == EINTR));

  if (remaining) {
    error_condition.error = true;
    error_condition.code = fdstream_error::eof;
    num -= remaining;
  }
  return num;
}

fdostream::fdostream(int fd, bool manage): std::ostream(0), buf(fd, manage) {
  std::ostream::rdbuf(&buf);
}

fdostream::fdostream(): std::ostream(0) {
  std::ostream::rdbuf(&buf);
}

fdinbuf::fdinbuf(): stream_p(0) {
  reset();
}

fdinbuf::fdinbuf(int fd, bool manage): stream_p(0) {
  attach_fd(fd, manage);
}

fdinbuf::~fdinbuf() {
  if (stream_p) {
    while (std::fclose(stream_p) == EOF && errno == EINTR);
  }
}

void fdinbuf::reset() {
  setg(putback_buffer + 1, putback_buffer + 1, putback_buffer + 1);
  error_condition.error = false;
}

int fdinbuf::attach_fd(int fd, bool manage) {
  int return_val = 0;
  if (stream_p) {
    while (std::fclose(stream_p) == EOF && errno == EINTR);
  }
  reset();
  if (fd >= 0) {
    // duplicate the file descriptor if we are not managing it
    if (!manage) fd = dup(fd);
    if (fd == -1) {
      error_condition.error = true;
      error_condition.code = fdstream_error::dup;
      return_val = -1;
    }      
    else {
      stream_p = fdopen(fd, "r");
      if (!stream_p) {
	error_condition.error = true;
	error_condition.code = fdstream_error::open;
	return_val = -1;
      }
    }
  }  
  return return_val;
}

void fdinbuf::close_filestream() {
  if (stream_p) {
    while (std::fclose(stream_p) == EOF && errno == EINTR);
  }
  stream_p = 0;
  reset();
}

int fdinbuf::get_fd() const {
  if (!stream_p) return -1;
  return fileno(stream_p);
}

// the standard requires this to return the first character available
// on underflow or traits_type::eof() (= EOF with char_type == char)
fdinbuf::traits_type::int_type fdinbuf::underflow() {
  if (gptr() < egptr()) return traits_type::to_int_type(*gptr());

  int putback_count = 0;
  // copy the character in bump position (if any) to putback position
  if (gptr() - eback()) {
    *putback_buffer = *(gptr() - 1);
    putback_count = 1;
  }

  // now insert a character into the bump position
  int result;
  do {
    result = std::fgetc(stream_p);
  } while (result == EOF && errno == EINTR);

  if (result != EOF) *(putback_buffer + 1) = result;
  else {
    error_condition.error = true;
    error_condition.code = fdstream_error::eof;
    return traits_type::eof();
  }
  
  // reset buffer pointers
  setg(putback_buffer + (1 - putback_count),
       putback_buffer + 1,
       putback_buffer + 2);

  // return character in bump/peek position
  return result; // == *(putback_buffer + 1) == *gptr()
}

// the standard requires this to return the number of characters fetched
// (which will be 0 for stream failure - it is not correct to return EOF)
std::streamsize fdinbuf::xsgetn(char* dest, std::streamsize num) {

  std::streamsize chars_read = 0;

  // available would normally be 0, but could be up to 2 if there
  // have been putbacks or a peek and a putback
  std::streamsize available = egptr() - gptr();

  // if num is less than or equal to the characters already in the
  // putback buffer, extract from buffer
  if (num <= available) {
    traits_type::copy(dest, gptr(), num);
    gbump(num);
    chars_read = num;
  }

  else {
    // first copy out putback buffer
    if (available) {
      traits_type::copy(dest, gptr(), available);
      chars_read = available;
    }

    std::streamsize remaining = num - chars_read;
    std::streamsize result;
    do {
      result = std::fread(dest + chars_read, sizeof(char), remaining, stream_p);
      chars_read += result;
      remaining -= result;
    } while (remaining && (result || errno == EINTR));

    if (remaining) {
      error_condition.error = true;
      error_condition.code = fdstream_error::eof;
      return chars_read;
    }

    if (chars_read) {
      // now mimic extraction of all characters by sbumpc() by putting
      // two characters into the putback buffer (if available) and resetting the
      // putback buffer pointers
      int putback_count;
      if (chars_read >= 2) {
	*putback_buffer = *(dest + (chars_read - 2));
	putback_count = 2;
      }
      else { // if we have reached here then we have only fetched
             // one character and it must have been read with
             // fread() and not taken from the putback
             // buffer - otherwise we would have ended
             // at the first if block in this method
             // - and this also means that gptr() == egptr()
	if (gptr() - eback()) {
	  *putback_buffer = *(gptr() - 1);
	  putback_count = 2;
	}
	else putback_count = 1;
      }
      *(putback_buffer + 1) = *(dest + (chars_read - 1));

      // reset putback buffer pointers
      setg(putback_buffer + (2 - putback_count),
	   putback_buffer + 2,
	   putback_buffer + 2);
    }
  }
  return chars_read;
}

fdistream::fdistream(int fd, bool manage): std::istream(0), buf(fd, manage) {
  std::istream::rdbuf(&buf);
}

fdistream::fdistream(): std::istream(0) {
  std::istream::rdbuf(&buf);
}
