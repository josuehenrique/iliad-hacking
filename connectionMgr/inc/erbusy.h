/*
 * This file is part of connectionMgr.
 *
 * connectionMgr is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * connectionMgr is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * \file erbusy.h
 * \brief connectionMgr - busybar 
 * 
 * Copyright (C) 2007 iRex Technologies BV.
 */


#ifndef __EREADER_ERBUSY_H__
#define __EREADER_ERBUSY_H__

#include <glib.h>

#ifdef __cplusplus
extern  "C"
{
#endif  /* __cplusplus */

    /**
     * Open communication channel with erbusy deamon
     * counts on the fact that erbusy is running
     *
     * @returns void
     */
    void erbusy_init();

    /**
     * request from contentlister
     *
     * @returns -
     */
    void erbusy_off(void);
    void erbusy_blink(void);
    void erbusy_on(void);
    void erbusy_shutdown(void);

    gboolean delay_erbusy_blink(gpointer data);

#ifdef __cplusplus
}
#endif  //* __cplusplus */

#endif //__EREADER_ERBUSY_H__

