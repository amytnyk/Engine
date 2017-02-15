#pragma once
#include <Windows.h>
#include "Time.hpp"

class Timer
{
public:
  __declspec(dllexport)Timer();
  __declspec(dllexport)void Restart();
  __declspec(dllexport)int GetElapsedTime();
private:
  Time start_time;
};
