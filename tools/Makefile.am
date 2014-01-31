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

## @@add all tools to be built here, following the hello-world example

AM_CPPFLAGS = -I$(top_srcdir) -I$(top_srcdir)/common -I$(top_srcdir)/lib

dist_bin_SCRIPTS =

bin_PROGRAMS = hello-world

hello_world_SOURCES = \
	hello-world.c
hello_world_LDADD = -lhello
hello_world_LDFLAGS = -L$(top_builddir)/lib

ACLOCAL_AMFLAGS = -I m4

CLEANFILES = *~
