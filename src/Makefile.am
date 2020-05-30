bin_PROGRAMS = aget
aget_SOURCES = \
	src/main.c

AM_CFLAGS = $(PTHREAD_CFLAGS) $(WARN_CFLAGS) \
	-Wno-declaration-after-statement \
	-Wno-error=cast-align \
	-Wno-error=inline

aget_LDADD = $(LIBOBJS) $(LIBINTL) $(PTHREAD_LIBS)
aget_CC = $(PTHREAD_CC)
