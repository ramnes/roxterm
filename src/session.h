#ifndef SESSION_H
#define SESSION_H
/*
    roxterm - VTE/GTK terminal emulator with tabs
    Copyright (C) 2004-2011 Tony Houghton <h@realh.co.uk>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

/* Session management */

#ifndef DEFNS_H
#include "defns.h"
#endif

#if ENABLE_SM

void session_init(const char *client_id);

gboolean session_load(const char *client_id);

#else

inline static void session_init(const char *client_id)
{
    (void) client_id;
}

inline static gboolean session_load(const char *client_id)
{
    (void) client_id;
    return TRUE;
}

#endif

#endif /* SESSION_H */

/* vi:set sw=4 ts=4 et cindent cino= */
