#pragma once
#include "Circle.hpp"
#include <Windows.h>

MCircle::MCircle(int x, int y, double radius, COLORREF border_color, COLORREF fill_color)
{
  this->X = x;
  this->Y = y;
  this->Radius = radius;
  this->border_color = border_color;
  this->fill_color = fill_color;
}