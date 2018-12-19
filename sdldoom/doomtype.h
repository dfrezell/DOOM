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
// DESCRIPTION:
//  Simple basic typedefs, isolated here to make it easier
//   separating modules.
//    
//-----------------------------------------------------------------------------

#ifndef __DOOMTYPE__
#define __DOOMTYPE__

#ifndef __BYTEBOOL__
#define __BYTEBOOL__
// Fixed to use builtin bool type with C++.
#ifdef __cplusplus
typedef bool    boolean;
#else
typedef enum { false, true } boolean;
#endif
typedef unsigned char byte;
#endif


#include <limits.h>

#ifndef MAXCHAR
#define MAXCHAR		((char)SCHAR_MAX)
#endif // MAXCHAR

#ifndef MAXSHORT
#define MAXSHORT	((short)SHRT_MAX)
#endif // MAXSHORT

// Max pos 32-bit int.
#ifndef MAXINT
#define MAXINT		((int)INT_MAX)
#endif // MAXINT

#ifndef MAXLONG
#define MAXLONG		((long)LONG_MAX)
#endif // MAXLONG

#ifndef MINCHAR
#define MINCHAR		((char)SCHAR_MIN)
#endif // MINCHAR

#ifndef MINSHORT
#define MINSHORT	((short)SHRT_MIN)
#endif // MINSHORT

// Max negative 32-bit integer.
#ifndef MININT
#define MININT		((int)INT_MIN)
#endif // MININT

#ifndef MINLONG
#define MINLONG		((long)LONG_MIN)
#endif // MINLONG

#endif
//-----------------------------------------------------------------------------
//
// $Log:$
//
//-----------------------------------------------------------------------------
