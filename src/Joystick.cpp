/*
  Joystick.cpp - //short description\\.
  Created by Csermendy Bendeguz, April 8, 2025.
  MIT license
*/

#include "Arduino.h"
#include "Library_name.h"

analogJoystick::analogJoystick(byte Xpin, byte Ypin/*, byte buttonpin = 255*/)
{
  _Xpin = Xpin;
  _Ypin = Ypin;

  /*if(buttonpin != 255) {
    _buttonpin = buttonpin;
    _buttonhandling = true;
  }*/
}

void analogJoystick::begin()
{
  pinMode(_Xpin, INPUT);
  pinMode(_Ypin, INPUT);

  /*if(buttonhandling == true) {
    pinMode(_buttonpin, INPUT_PULLUP);
  }*/
}

byte analogJoystick::getX()
{
  return map(digitalRead(_Xpin), 0, 255, -127, 127);
}

byte analogJoystick::getY()
{
  return map(digitalRead(_Ypin), 0, 255, -127, 127);
}
