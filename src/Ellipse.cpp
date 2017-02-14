#pragma once
#include "Ellipse.hpp"

MEllipse::MEllipse(int firstX, int firstY, double lastX, double lastY, COLORREF border_color, COLORREF fill_color)
{
  this->FirstX = firstX;
  this->FirstY = firstY;
  this->LastX = lastX;
  this->LastY = lastY;
  this->Border_color = border_color;
  this->Fill_color = fill_color;
}