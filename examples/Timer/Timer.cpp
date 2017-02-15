#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <Defs.hpp>
#include <Timer.hpp>

int main()
{
  Timer timer;
  SLEEP(100);
  std::cout << timer.GetElapsedTime() << std::endl;
  PAUSE;
  return 0;
}