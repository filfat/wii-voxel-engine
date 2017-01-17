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

#include "Renderer3D.h"
#include "MasterRenderer.h"
#include "../core/grrlib.h"
#include "../textures/Texture.h"

Renderer3D::Renderer3D() {}

Renderer3D::~Renderer3D() {}

void Renderer3D::draw2DTexture( BasicTexture* tex )
{
	Texture* tx = (Texture*) tex;
    MasterRenderer::DrawImage( *tx, tx->GetX(), tx->GetY(), 0, 1, 1, tx->GetColor() );
}

void Renderer3D::drawEntity(const Entity* entity) const
{
	entity->GetRenderer()->Render();
}
