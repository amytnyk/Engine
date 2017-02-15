#pragma once
#include <Windows.h>
#include "Mouse.hpp"
#include "Button.hpp"

namespace Mouse
{
  Coord GetCursorPosition()
  {
    POINT p;
    GetCursorPos(&p);
    Coord coord(0, 0);
    coord.PointTo(p);
    return coord;
  }

  bool IsMouseButtonPressed(Button button)
  {
    int vkey = 0;
    switch (button)
    {
    case Button::Left:     vkey = GetSystemMetrics(SM_SWAPBUTTON) ? VK_RBUTTON : VK_LBUTTON; break;
    case Button::Right:    vkey = GetSystemMetrics(SM_SWAPBUTTON) ? VK_LBUTTON : VK_RBUTTON; break;
    case Button::Middle:   vkey = VK_MBUTTON;  break;
    case Button::XButton1: vkey = VK_XBUTTON1; break;
    case Button::XButton2: vkey = VK_XBUTTON2; break;
    default:              vkey = 0;           break;
    }
    return (GetAsyncKeyState(vkey) & 0x8000) != 0;
  }

  void SetCursorPosition(Coord coord)
  {
    SetCursorPos(coord.X, coord.Y);
  }
}