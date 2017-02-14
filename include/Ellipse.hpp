#pragma once
#include <Windows.h>

class MEllipse
{
public:
  MEllipse(int, int, double, double, COLORREF, COLORREF);
  int FirstX;
  int FirstY;
  double LastX;
  double LastY;
  COLORREF Border_color;
  COLORREF Fill_color;
};
