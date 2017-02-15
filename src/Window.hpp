#pragma once
#include "Rectangle.hpp"
#include "Line.hpp"
#include "Ellipse.hpp"
#include "Circle.hpp"
#include "Sprite.hpp"
#include <Windows.h>

class Window
{
public:
  __declspec(dllexport)void Draw(MRectangle);
  __declspec(dllexport)void Draw(MLine);
  __declspec(dllexport)void Draw(MCircle);
  __declspec(dllexport)void Draw(MEllipse);
  __declspec(dllexport)void Draw(MSprite);
  __declspec(dllexport)void Clear();
  __declspec(dllexport)void SetHwnd(HWND);
private:
  HWND hwnd;
};


