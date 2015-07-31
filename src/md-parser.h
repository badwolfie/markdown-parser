/* md-parser.h
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

#ifndef MD_PARSER_H
#define MD_PARSER_H

#include <glib-object.h>

#define MD_TYPE_PARSER               (md_parser_get_type ()) 
#define MD_PARSER(obj)               (G_TYPE_CHECK_INSTANCE_CAST ((obj), MD_TYPE_PARSER, MdParser)) 
#define MD_IS_PARSER(obj)            (G_TYPE_CHECK_INSTANCE_TYPE ((obj), MD_TYPE_PARSER))  

typedef struct _MdParser MdParser;
typedef struct _MdParserClass MdParserClass;
typedef struct _MdParserPrivate MdParserPrivate;

GType md_parser_get_type (void);
MdParser * md_parser_new (void);

void md_parser_proccess_file (const gchar * filename);

#endif /* MD_PARSER_H */
