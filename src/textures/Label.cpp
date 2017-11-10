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

#include "Label.h"
#include "../Engine.h"

Label::Label(const std::string& text, float x, float y, TextureLoadingData textureData, GRRLIB_ttfFont* font, uint32_t fontSize, uint32_t color )
    : Sprite(x, y, textureData), m_text( text ), m_font( font ), m_fontSize( fontSize ), m_textColor( color )
{
}

Label::~Label() { }

Label *Label::Create(std::string text, GRRLIB_ttfFont *font, std::string searchName, uint16_t sortingLayer)
{
    Label* label = new Label( text, 0, 0, {nullptr, 0}, font, DEFAULT_FONT_SIZE, GRRLIB_WHITE );
    label->SetName(searchName);
    label->SetSortingLayerIndex(sortingLayer);
    label->Load();
    Engine::Get().GetSpriteStageManager().Add(label);
    return label;
}

GRRLIB_ttfFont& Label::GetFont() const
{
	return *m_font;
}

const std::string& Label::GetText() const
{
	return m_text;
}

ETextureType Label::GetTextureType() const
{
	return LABEL;
}

uint32_t Label::GetFontSize() const
{
	return m_fontSize;
}

uint32_t Label::GetTextColor() const
{
	return m_textColor;
}

bool Label::IsVisible() const
{
	return true;
}

void Label::SetFontSize(uint32_t fontSize)
{
	m_fontSize = fontSize;

}

void Label::SetTextColor(u32 textColor)
{
	m_textColor = textColor;
}
