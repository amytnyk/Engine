#pragma once
#include <Windows.h>
#include <string>
#include "Coord.hpp"

namespace System
{
  __declspec(dllexport)COLORREF GetRGB(int, int, int);
  __declspec(dllexport)COLORREF ConvertStringToColor(std::string);
  __declspec(dllexport)std::string ConvertColorToString(COLORREF);
}
