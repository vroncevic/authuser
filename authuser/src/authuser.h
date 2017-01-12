/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * authuser.h
 * Copyright (C) 2016 Vladimir Roncevic <elektron.ronca@gmail.com>
 * 
 * authuser is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * authuser is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __AUTHUSER_H
#define __AUTHUSER_H

#include <security/pam_appl.h>
#include <security/pam_misc.h>
#include <stdio.h>

/*! \brief authuser (authentication user)
 *  Success return 0, else return 1
 */
int authuser(void);

#endif

