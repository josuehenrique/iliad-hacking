AM_CFLAGS = -g -Werror

INCLUDES = @LIBXML_CFLAGS@ $(DEPS_CFLAGS) $(LIBERMANIFEST_CFLAGS) -I$(top_srcdir)/include

noinst_PROGRAMS = scbTest
scbTest_SOURCES = test.c
scbTest_LDADD = @LIBXML_LIBS@ $(DEPS_LIBS)$(LIBERMANIFEST_LIBS) 
