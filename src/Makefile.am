bin_PROGRAMS = markdown-parser

markdown_parser_SOURCES = \
	md-parser.c md-parser.h \
	markdown-parser.c

markdown_parser_CPPFLAGS = \
	-I$(top_srcdir) \
	$(DISABLE_DEPRECATED) \
	$(AM_CPPFLAGS)

markdown_parser_CFLAGS = \
	$(MD_PARSER_CFLAGS) \
	$(WARN_CFLAGS) \
	$(AM_CFLAGS)

markdown_parser_LDFLAGS = \
	$(AM_LDFLAGS)

markdown_parser_LDADD = \
	$(MD_PARSER_LIBS) \
	$(INTLLIBS)
