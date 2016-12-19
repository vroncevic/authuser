
/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * lib.c
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

#include "authuser.h"

int authuser(void) {
	pam_handle_t* pamh;
	struct pam_conv pamc;
	pamc.conv = &misc_conv;
	pamc.appdata_ptr = NULL;
	pam_start("su", getenv("USER"), &pamc, &pamh);
	if (pam_authenticate (pamh, 0) == PAM_SUCCESS) {
		pam_end(pamh, 0);
		return 0;
	}
	return 1;
}

