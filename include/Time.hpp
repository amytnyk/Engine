#pragma once
#include <Windows.h>
#include <iostream>

class Time
{
public:
  Time();
  long int ToMilliseconds();
  void MillisecondsTo(long int milliseconds);
  int Year;
  int Month;
  int Day;
  int Hour;
  int Minute;
  int Second;
  int Millisecond;
};

Time::Time()
{
  SYSTEMTIME time;
  GetSystemTime(&time);
  this->Year = time.wYear;
  this->Month = time.wMonth;
  this->Day =  time.wDay;
  this->Hour = time.wHour;
  this->Minute = time.wMinute;
  this->Second = time.wSecond;
  this->Millisecond = time.wMilliseconds;
}

long int Time::ToMilliseconds()
{
  int milliseconds = 0;
  milliseconds += this->Millisecond;
  milliseconds += this->Second * 1000;
  milliseconds += this->Minute * 1000 * 60;
  milliseconds += this->Hour * 1000 * 60 * 60;
  milliseconds += this->Day * 1000 * 60 * 60 * 24;
  return milliseconds;
}

void Time::MillisecondsTo(long int milliseconds)
{
  if (milliseconds > 1000 * 60 * 60 * 24)
  {
    this->Day = milliseconds / 1000 * 60 * 60 * 24;
    milliseconds -= this->Day * 1000 * 60 * 60 * 24;
  }
  if (milliseconds >  1000 * 60 * 60)
  {
    this->Hour = milliseconds / 1000 * 60 * 60;
    milliseconds -= this->Hour * 1000 * 60 * 60;
  }
  if (milliseconds > 1000 * 60)
  {
    this->Minute = milliseconds / this->Minute * 1000 * 60;
    milliseconds -= this->Minute * 1000 * 60;
  }
  if (milliseconds > 1000)
  {
    this->Second = milliseconds /  1000;
    milliseconds -= this->Second * 1000;
  }
  this->Millisecond = milliseconds % 1000;
}
