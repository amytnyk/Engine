#pragma once
#include <Windows.h>
#include "Time.hpp"

class Timer
{
public:
  Timer();
  void Restart();
  int GetElapsedTime();
private:
  Time start_time;
};

Timer::Timer()
{
  this->start_time = Time();
}

void Timer::Restart()
{
  this->start_time = Time();
}

int Timer::GetElapsedTime()
{
  Time time = Time();
  return time.ToMilliseconds() - this->start_time.ToMilliseconds();
}
