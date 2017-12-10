/***
 *
 * Copyright (C) 2016 DaeFennek
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 ***/

#ifndef _BLOCKRENDERHELPER_H_
#define _BLOCKRENDERHELPER_H_

#include <stdint.h>
#include "../utils/MathHelper.h"

#define LEFT_FACE   0x01
#define RIGHT_FACE  (LEFT_FACE  << 1)
#define FRONT_FACE  (RIGHT_FACE << 1)
#define BACK_FACE   (FRONT_FACE << 1)
#define TOP_FACE    (BACK_FACE  << 1)
#define BOTTOM_FACE (TOP_FACE   << 1)

struct BlockRenderVO
{    
    uint8_t FaceMask = 0;
    uint32_t Faces = 0;
    Vector3 BlockPosition;
};

#endif /* _BLOCKRENDERHELPER_H_ */
