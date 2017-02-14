#include "Line.hpp"

MLine::MLine(int firstX, int firstY, int lastX, int lastY, COLORREF color)
{
  this->FirstX = firstX;
  this->FirstY = firstY;
  this->LastX = lastX;
  this->LastY = lastY;
  this->Color = color;
}
