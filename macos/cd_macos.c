/*
Copyright (C) 1997-2001 Id Software, Inc.
Copyright (C) 2018-2019 Krzysztof Kondrak

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.

*/
// Quake is a trademark of Id Software, Inc., (c) 1996 Id Software, Inc. All
// rights reserved.

// No CD support on MacOS

#include "../client/client.h"

void CDAudio_Play(int track, qboolean looping) { }
void CDAudio_Stop(void) { }
void CDAudio_Pause(void) { }
void CDAudio_Resume(void) { }
void CDAudio_Update(void) { }
int  CDAudio_Init(void) { return 0; }
void CDAudio_Activate (qboolean active) { }
void CDAudio_Shutdown(void) { }
