#pragma once
#include <Windows.h>
#include "Key.hpp"

namespace KeyBoard
{
  __declspec(dllexport)bool IsKeyPressed(Key);
}