#pragma once
#include <Windows.h>
#include "Coord.hpp"
#include "Button.hpp"

namespace Mouse
{
  __declspec(dllexport)Coord GetCursorPosition();
  __declspec(dllexport)void SetCursorPosition(Coord);
  __declspec(dllexport)bool IsMouseButtonPressed(Button);
}