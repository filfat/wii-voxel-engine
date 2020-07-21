/***
 *
 * Copyright (C) 2017 DaeFennek
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

#ifndef CHUNKCHANGEDATA_H
#define CHUNKCHANGEDATA_H

#include "../blocks/BlockManager.h"
#include "../../utils/Vector3.h"
#include <iostream>

#define CHUNK_MAP_CASH_X 5
#define CHUNK_MAP_CASH_Y 5

#define CHUNK_SIZE_X 16
#define CHUNK_SIZE_Y 128
#define CHUNK_SIZE_Z 16

#define CHUNK_MIN_GROUND 20

#define CHUNK_BLOCK_SIZE_X (BLOCK_SIZE * CHUNK_SIZE_X)
#define CHUNK_BLOCK_SIZE_Y (BLOCK_SIZE * CHUNK_SIZE_Y)
#define CHUNK_BLOCK_SIZE_Z (BLOCK_SIZE * CHUNK_SIZE_Z)

#define STONE_LEVEL 20
#define TREE_HIGHT 6

struct Vec3i
{
    uint32_t X;
    uint32_t Y;
    uint32_t Z;
};

struct BlockChangeData
{
    std::string Filepath;
    BlockType   Type;
    Vec3i       BlockPosition;
    Vector3     ChunkPosition;
};

struct ChunkLoadingData
{
    std::string     Filepath;
    class Chunk*    ChunkObj;
};


#endif // CHUNKCHANGEDATA_H
