#pragma once
#include <Windows.h>

class MCircle
{
public:
  __declspec(dllexport)MCircle(int, int, int, COLORREF, COLORREF);
  int X;
  int Y;
  int Radius;
  COLORREF border_color;
  COLORREF fill_color;
};
