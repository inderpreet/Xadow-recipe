/*-----------------------------------------------------------------------------------
** demo of xadow:user led control
** loovee 2013-6-18
** https://github.com/reeedstudio/xadow
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License as published by the Free Software Foundation; either
** version 2.1 of the License, or (at your option) any later version.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
** Lesser General Public License for more details.
**
** You should have received a copy of the GNU Lesser General Public
** License along with this library; if not, write to the Free Software
** Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
**--------------------------------------------------------------------------------*/
#include <Wire.h>

#include "xadow.h"

void setup()
{
    Xadow.init();
}

void loop()
{
    Xadow.greenLed(1);              // green led on
    delay(3000);
    Xadow.greenLed(0);              // green led off
    delay(3000);
    Xadow.greenLed(1);
    delay(20);
    Xadow.greenLed(0);
    gLEDport ^= gLEDbit;
    delay(3000);
}

/*********************************************************************************************************
  END FILE
*********************************************************************************************************/