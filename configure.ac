AC_PREREQ(2.61)
AC_INIT([Markdown parser], [0.1], [mailto:ihernandezs@openmailbox.org], [markdown-parser])

AC_CONFIG_SRCDIR([src])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([1.10 foreign dist-bzip2 no-dist-gzip])

m4_ifdef([AM_SILENT_RULES],[AM_SILENT_RULES([yes])])

# Check for programs
AX_CHECK_ENABLE_DEBUG
AC_PROG_CC

# ***************************
# Check for required packages gobject-2.0
# ***************************

pkg_modules="glib-2.0 >= 2.44 gobject-2.0 >= 2.44"
PKG_CHECK_MODULES(MD_PARSER, [$pkg_modules])

# *************
# Documentation
# *************

# AX_REQUIRE_DEFINED([YELP_HELP_INIT])
# YELP_HELP_INIT

# *************************************
# *************************************

AC_CONFIG_FILES([
	Makefile
	src/Makefile
])

AC_OUTPUT
