/*
===========================================================================

Unvanquished BSD Source Code
Copyright (c) 2013-2016, Unvanquished Developers
All rights reserved.

This file is part of the Unvanquished BSD Source Code (Unvanquished Source Code).

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.
    * Neither the name of the Unvanquished developers nor the
      names of its contributors may be used to endorse or promote products
      derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL DAEMON DEVELOPERS BE LIABLE FOR ANY
DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

===========================================================================
*/

// see also engine/qcommon/SurfaceFlags.h for standard definitions

// custom content flags
#define CUSTOM_CONTENTS_NOALIENBUILD    BIT( 12 ) // disallow alien building
#define CUSTOM_CONTENTS_NOHUMANBUILD    BIT( 13 ) // disallow human building
#define CUSTOM_CONTENTS_NOBUILD         BIT( 14 ) // disallow building,       override CONTENTS_MOVER

// custom surface flags
#define CUSTOM_SURF_NOALIENBUILD        BIT( 19 ) // disallow alien building, override SURF_GRASS
#define CUSTOM_SURF_NOHUMANBUILD        BIT( 20 ) // disallow human building, override SURF_GRAVEL
#define CUSTOM_SURF_NOBUILD             BIT( 21 ) // disallow building,       override SURF_GLASS
