/* -*- Mode:NS3; -*- */
/*
 * Copyright (c) 2005 INRIA
 * All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Author: Mathieu Lacage <mathieu.lacage.inria.fr>
 */

#include "system-wall-clock-ms.h"

namespace ns3 {

class SystemWallClockMsPrivate {
public:
    void start (void);
    unsigned long long end (void);
private:
};

void 
SystemWallClockMsPrivate::Start (void)
{
}

unsigned long long 
SystemWallClockMsPrivate::End (void)
{
    return 0;
}

SystemWallClockMs::SystemWallClockMs ()
    : m_priv (new SystemWallClockMsPrivate ())
{}

SystemWallClockMs::~SystemWallClockMs ()
{
    delete m_priv;
    m_priv = 0;
}

void
SystemWallClockMs::Start (void)
{
    m_priv->Start ();
}
unsigned long long
SystemWallClockMs::End (void)
{
    return m_priv->End ();
}

}; // namespace ns3
