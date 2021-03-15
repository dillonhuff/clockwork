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

#ifndef FDSTREAM_H
#define FDSTREAM_H

#include <istream>
#include <ostream>
#include <streambuf>
#include <cstdio>


struct fdstream_error {
  bool error;
  enum {dup, open, flush, eof} code;  
};


class fdoutbuf: public std::streambuf {

  fdstream_error error_condition;
  std::FILE* stream_p;

  void reset();
protected:
  virtual int sync();
  virtual int_type overflow(int_type);
  virtual std::streamsize xsputn(const char*, std::streamsize);
public:
  int attach_fd(int fd, bool manage = true);
  void close_filestream();
  int get_fd() const;
  fdstream_error get_error() const {return error_condition;}
  fdoutbuf(int fd, bool manage = true);
  fdoutbuf();
  virtual ~fdoutbuf();
};

class fdostream: public std::ostream {
  fdoutbuf buf;
public:
  int attach(int fd, bool manage = true) {return buf.attach_fd(fd, manage);}
  void close() {buf.close_filestream();}
  int filedesc() const {return buf.get_fd();}
  fdstream_error get_error() const {return buf.get_error();}
  fdostream(int fd, bool manage = true);
  fdostream();
};

class fdinbuf: public std::streambuf {

  fdstream_error error_condition;
  std::FILE* stream_p;

  // putback_buffer does not do any buffering: it reserves one character
  // for putback and one character for a peek() and/or for bumping
  // with sbumpc/uflow() - buffering is done by the underlying C stream
  char_type putback_buffer[2];

  void reset();
protected:
  virtual int_type underflow();
  virtual std::streamsize xsgetn(char*, std::streamsize);
public:
  int attach_fd(int fd, bool manage = true);
  void close_filestream();
  int get_fd() const;
  fdstream_error get_error() const {return error_condition;}
  fdinbuf(int fd, bool manage = true);
  fdinbuf();
  virtual ~fdinbuf();
};

class fdistream: public std::istream {
  fdinbuf buf;
public:
  int attach(int fd, bool manage = true) {return buf.attach_fd(fd, manage);}
  void close() {buf.close_filestream();}
  int filedesc() const {return buf.get_fd();}
  fdstream_error get_error() const {return buf.get_error();}
  fdistream(int fd, bool manage = true);
  fdistream();
};

#endif /*FDSTREAM_H*/
