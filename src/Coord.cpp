#pragma once
#include "Coord.hpp"
#include <Windows.h>

Coord::Coord(int x, int y)
{
  this->X = x;
  this->Y = y;
}

POINT Coord::ToPoint()
{
  POINT point;
  point.x = this->X;
  point.y = this->Y;
  return point;
}

void Coord::PointTo(POINT point)
{
  this->X = point.x;
  this->Y = point.y;
}