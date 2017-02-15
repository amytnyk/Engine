#pragma once
#include <Windows.h>
#include <iostream>

class Time
{
public:
  __declspec(dllexport)Time();
  __declspec(dllexport)long int ToMilliseconds();
  __declspec(dllexport)void MillisecondsTo(long int milliseconds);
  int Year;
  int Month;
  int Day;
  int Hour;
  int Minute;
  int Second;
  int Millisecond;
};
