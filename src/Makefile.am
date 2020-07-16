bin_PROGRAMS = aget
aget_SOURCES = \
        src/aget.h \
        src/aget.c \
        src/conn.h \
        src/conn.c \
        src/conf.h \
        src/conf.c \
        src/options.h \
        src/options.c \
	src/main.c

AM_CFLAGS = $(PTHREAD_CFLAGS) $(WARN_CFLAGS) \
	-Wno-declaration-after-statement \
	-Wno-error=cast-align \
	-Wno-error=inline

aget_LDADD = $(LIBOBJS) $(LIBINTL) $(PTHREAD_LIBS)
aget_CC = $(PTHREAD_CC)
