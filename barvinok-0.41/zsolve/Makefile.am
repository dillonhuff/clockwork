#						-*- Makefile -*-
# 4ti2 -- A software package for algebraic, geometric and combinatorial
# problems on linear spaces.
# 
# Copyright (C) 2006 4ti2 team.
# Main author(s): Matthias Walter.
# 
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
# 
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
# 
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software
# Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA. 

LIBS =
AM_CFLAGS = -DNDEBUG

noinst_LTLIBRARIES = libzsolve.la

libzsolve_la_SOURCES =				\
	defs.c 					\
	vector.c 				\
	vectorarray.c 				\
	linearsystem.c 				\
	indexarray.c				\
	lattice.c 				\
	matrix.c 				\
	varproperties.c 			\
	valuetrees.c 				\
	cputime.c 				\
	libzsolve.c

noinst_HEADERS =				\
	banner.h				\
	cputime.h				\
	defs.h					\
	indexarray.h				\
	lattice.h				\
	libzsolve.h				\
	linearsystem.h				\
	matrix.h				\
	opts.h					\
	valuetrees.h				\
	varproperties.h				\
	vectorarray.h				\
	vector.h

noinst_PROGRAMS = zsolve

zsolve_SOURCES = 				\
	solve.c					\
	opts.c

zsolve_LDADD = libzsolve.la

# For out-of-source builds, make sure we have a copy of the script in
# the build directory, so that the script finds the binary.
noinst_SCRIPTS = hilbert graver

EXTRA_DIST = hilbert.template graver.template

hilbert: hilbert.template
	$(install_sh) -c -m 755 $< $@

graver: graver.template
	$(install_sh) -c -m 755 $< $@
