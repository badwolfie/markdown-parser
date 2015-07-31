/* md-parser.c
 *
 * Copyright (C) 2015 Ian Hernandez <ihernandezs@openmailbox.org>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

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
