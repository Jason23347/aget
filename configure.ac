# COPY
AC_COPYRIGHT([
Copyright 2020 Jason
])

AC_PREREQ([2.69])
AC_INIT([aget], [0.9], [https://github.com/jason23347/aget/issues])

AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_SRCDIR([src/main.c])
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_MACRO_DIR([m4])
AC_CONFIG_LIBOBJ_DIR([lib])
AM_INIT_AUTOMAKE([subdir-objects])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
AX_PTHREAD()

# Checks for header files.
AC_CHECK_HEADERS([ \
    stddef.h \
    stdlib.h
])

# Checks for typedefs, structures, and compiler characteristics.
AC_C_INLINE

# Checks for library functions.

# OS
AC_CANONICAL_HOST
AC_DEFINE_UNQUOTED([ARCH], ["$host_os"], ["Define architecture"])

case "$host_os" in
darwin*)
    AC_DEFINE([_DARWIN_C_SOURCE], 1, [Define on Darwin to expose all libc features])
;;
solaris*)
    LIBS="$LIBS -lsocket -lnsl"
;;
hpux*)
    if [ -d /usr/local/lib/hpux32 ]; then
       LDFLAGS="$LDFLAGS -L/usr/local/lib/hpux32"
    fi
;;
esac

AC_CONFIG_FILES([
	Makefile
])
AC_OUTPUT
