#
# @@PROJECT_NAME
#
# Alistair King, CAIDA, UC San Diego
# corsaro-info@caida.org
#
# Copyright (C) 2012 The Regents of the University of California.
#
# This file is part of @@PROJECT_NAME.
#
# @@PROJECT_NAME is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# @@PROJECT_NAME is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with @@PROJECT_NAME.  If not, see <http://www.gnu.org/licenses/>.
#

## @@ replace all instances of "hello" with your project name (e.g. "corsaro")

SUBDIRS =
AM_CPPFLAGS = -I$(top_srcdir) -I$(top_srcdir)/common

lib_LTLIBRARIES = libhello.la

include_HEADERS = hello.h

libhello_la_SOURCES = 		\
	hello.c 		\
	hello.h			\
	hello_int.h

libhello_la_LIBADD = $(top_builddir)/common/libcccommon.la

libhello_la_LDFLAGS = -version-info @HELLO_MAJOR_VERSION@:@HELLO_MID_VERSION@:@HELLO_MINOR_VERSION@

ACLOCAL_AMFLAGS = -I m4

CLEANFILES = *~
