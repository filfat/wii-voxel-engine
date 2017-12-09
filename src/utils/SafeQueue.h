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

#ifndef SAFEQUEUE_H
#define SAFEQUEUE_H

#include <queue>
#include <ogcsys.h>
#include <gccore.h>


template<class T>
class SafeQueue
{
public:
    SafeQueue()
    {
        LWP_MutexInit(&m_mutex, false);
    }

    ~SafeQueue()
    {
         LWP_MutexDestroy(m_mutex);
    }

    T Pop()
    {
        LWP_MutexLock(m_mutex);
        T val = m_queue.front();
        m_queue.pop();
        LWP_MutexUnlock(m_mutex);
        return val;
    }

    void Push(const T& value)
    {
        LWP_MutexLock(m_mutex);
        m_queue.push(value);
        LWP_MutexUnlock(m_mutex);
    }

    bool IsEmpty()
    {
        LWP_MutexLock(m_mutex);
        bool bIsEmpty = m_queue.empty();
        LWP_MutexUnlock(m_mutex);
        return bIsEmpty;
    }

private:
    std::queue<T> m_queue;
    mutex_t m_mutex;
};

#endif // SAFEQUEUE_H