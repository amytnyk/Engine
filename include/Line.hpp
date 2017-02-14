#pragma once
#include <Windows.h>

class MLine
{
public:
  __declspec(dllexport)MLine(int, int, int, int, COLORREF);
  int FirstX;
  int FirstY;
  int LastX;
  int LastY;
  COLORREF Color;
};
