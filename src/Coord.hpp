#pragma once
#include <Windows.h>

class Coord
{
public:
  __declspec(dllexport)Coord(int, int);
  __declspec(dllexport)POINT ToPoint();
  __declspec(dllexport)void PointTo(POINT);
  int X;
  int Y;
};