#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H
/***
 *
 * Copyright (C) 2018 DaeFennek
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

#include "Packet.h"
#include "ServerConnection.h"

class NetworkManager
{
private:
    NetworkManager(){}
public:
    void Init();
    void Connect(const std::string& ip, uint16_t port);
    void Destroy();
    void Update();

    static NetworkManager& Get()
    {
        static NetworkManager s_instance;
        return s_instance;
    }

    inline bool Initialized() const
    {
        return m_bInitialized;
    }

    inline const Session& GetSession() const
    {
        return m_ServerConnection.GetSession();
    }

    NetworkManager(NetworkManager const&) = delete;
    void operator=(NetworkManager const&) = delete;

private:
    char m_LocalIP[16];
    char m_Gateway[16];
    char m_Netmask[16];
    bool m_bInitialized = false;

    ServerConnection m_ServerConnection;    
};

#endif // NETWORKMANAGER_H
