#pragma once
#include <Windows.h>
#include <string>
#include "Coord.hpp"
#include "System.hpp"

namespace System 
{
  COLORREF GetRGB(int r, int g, int b)
  {
    return RGB(r, g, b);
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