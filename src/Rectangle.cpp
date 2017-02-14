#pragma once
#include "Rectangle.hpp"

MRectangle::MRectangle(int x, int y, double sizeX, double sizeY, COLORREF border_color, COLORREF fill_color)
{
  this->X = x;
  this->Y = y;
  this->SizeX = sizeX;
  this->SizeY = sizeY;
  this->Border_color = border_color;
  this->Fill_color = fill_color;
}