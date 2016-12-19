##
## genclibpro ver.1.0
## Process this file with automake to produce Makefile.in
##

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS =\
	 -Wall\
	 -g

lib_LTLIBRARIES = libauthuser.la

libauthuser_la_SOURCES = \
	lib.c

libauthuser_la_LDFLAGS = 

libauthuser_la_LIBADD = \
	-lpam \
	-lpam_misc

include_HEADERS = \
	authuser.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = authuser-0.1.pc

EXTRA_DIST = \
	authuser-0.1.pc.in


