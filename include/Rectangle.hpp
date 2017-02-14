#pragma once
#include <Windows.h>

class MRectangle
{
public:
  __declspec(dllexport) MRectangle(int, int, double, double, COLORREF, COLORREF);
  int X;
  int Y;
  double SizeX;
  double SizeY;
  COLORREF Border_color;
  COLORREF Fill_color;
};
