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

#ifndef _SWITCHTOINTROCOMMAND_H_
#define _SWITCHTOINTROCOMMAND_H_

#include "../BasicCommand.h"
#include "../../Engine.h"

class SwitchToIntroCommand: public BasicCommand {
public:
	SwitchToIntroCommand();
	virtual ~SwitchToIntroCommand();
	void ExecuteCommand() override;
	static const char* Name() { return "SwitchToIntroCommand"; };
};

#endif /* _SWITCHTOINTROCOMMAND_H_ */
