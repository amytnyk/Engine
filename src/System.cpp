#pragma once
#include <Windows.h>
#include <string>
#include "Coord.hpp"

namespace System 
{
  COLORREF GetRGB(int r, int g, int b)
  {
    return RGB(r, g, b);
  }

  Coord GetCursorPosition()
  {
    POINT p;
    GetCursorPos(&p);
    Coord coord(0, 0);
    coord.PointTo(p);
    return coord;
  }

  COLORREF ConvertStringToColor(std::string c)
  {
    if (c == "red")
      return GetRGB(255, 0, 0);
    if (c == "green")
      return GetRGB(0, 255, 0);
    if (c == "blue")
      return GetRGB(0, 0, 255);
  }

  std::string ConvertColorToString(COLORREF color)
  {
    if (color == GetRGB(255, 0, 0))
      return "red";
    if (color == GetRGB(0, 255, 0))
      return "green";
    if (color == GetRGB(0, 0, 255))
      return "blue";
  }
}