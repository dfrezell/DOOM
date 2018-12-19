// Emacs style mode select   -*- C++ -*- 
//-----------------------------------------------------------------------------
//
// $Id:$
//
// Copyright (C) 1993-1996 by id Software, Inc.
//
// This source is available for distribution and/or modification
// only under the terms of the DOOM Source Code License as
// published by id Software. All rights reserved.
//
// The source is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// FITNESS FOR A PARTICULAR PURPOSE. See the DOOM Source Code License
// for more details.
//
// $Log:$
//
// DESCRIPTION:
//  DOOM graphics stuff for X11, UNIX.
//
//-----------------------------------------------------------------------------

#include <stdlib.h>
#include <unistd.h>
#include <sys/ipc.h>
#include <sys/shm.h>

#include <stdarg.h>
#include <sys/time.h>
#include <sys/types.h>
#include <sys/socket.h>

#include <netinet/in.h>
#include <errno.h>
#include <signal.h>

#include "doomstat.h"
#include "i_system.h"
#include "v_video.h"
#include "m_argv.h"
#include "d_main.h"

#include "doomdef.h"


void I_ShutdownGraphics(void)
{
}

//
// I_StartFrame
//
void I_StartFrame(void)
{
    // er?

}

void I_GetEvent(void)
{

}

//
// I_StartTic
//
void I_StartTic(void)
{

}

//
// I_UpdateNoBlit
//
void I_UpdateNoBlit(void)
{
    // what is this?
}

//
// I_FinishUpdate
//
void I_FinishUpdate(void)
{
}

//
// I_ReadScreen
//
void I_ReadScreen(byte * scr)
{
}

//
// I_SetPalette
//
void I_SetPalette(byte * palette)
{
}

void I_InitGraphics(void)
{
}
