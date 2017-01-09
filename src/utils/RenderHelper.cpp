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

#include "RenderHelper.h"

CRenderHelper::CRenderHelper() {}

CRenderHelper::~CRenderHelper() {}

size_t CRenderHelper::GetDisplayListSizeForFaces(uint32_t faces)
{
    return (size_t) ((32 * 6) * faces); // 32 * 6 magic numbers, seems to work fine
}
