#pragma once
#include <Windows.h>

class MCircle
{
public:
  __declspec(dllexport)MCircle(int, int, double, COLORREF, COLORREF);
  int X;
  int Y;
  double Radius;
  COLORREF border_color;
  COLORREF fill_color;
};
