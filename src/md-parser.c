

#include "md-parser.h"

struct _MdParser 
{
	GObject parent;
  MdParserPrivate * priv;
};

struct _MdParserClass 
{
	GObjectClass parent_class;
};

struct _MdParserPrivate
{
	
};

G_DEFINE_TYPE_WITH_PRIVATE (MdParser, md_parser, G_TYPE_OBJECT)

void 
md_parser_proccess_file (const gchar * filename) 
{
  
}

MdParser *
md_parser_new (void)
{
	MdParser * self = g_object_new (MD_TYPE_PARSER, NULL);
  self->priv = md_parser_get_instance_private (self);
  return self;
}

static void
md_parser_class_init (MdParserClass * klass)
{}

static void
md_parser_init (MdParser *self)
{}
