/*
  Joystick.h - //short description\\.
  Created by Csermendy Bendeguz, April 8, 2025.
  MIT license
*/

#ifndef Joystick_h
#define Joystick_h

#include "Arduino.h"

class analogJoystick
{
  public:
    analogJoystick();
    void begin();
    void getX();
  private:
    _Xpin;
    _Ypin; 
};

#endif

