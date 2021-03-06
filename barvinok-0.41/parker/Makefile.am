MONAPATH = @MONAPATH@

lib_LTLIBRARIES = libparker.la
libparker_la_SOURCES = \
	construction.c \
	count_paths.c \
	count_solutions.cc \
	count_solutions.h
include_HEADERS = count_solutions.h
libparker_la_LIBADD = -ldfa -lbdd -lmem
libparker_la_LDFLAGS = -L$(MONAPATH)/DFA -L$(MONAPATH)/BDD -L$(MONAPATH)/Mem
INCLUDES = -I$(MONAPATH)/Mem -I$(MONAPATH)/DFA -I$(MONAPATH)/BDD
libparker_la_CPPFLAGS = $(INCLUDES) @OMEGA_CPPFLAGS@ -DNDEBUG
