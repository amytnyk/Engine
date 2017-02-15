#include "stdafx.h"
#include <iostream>
#include <Windows.h>
#include <Defs.hpp>
#include <Window.hpp>
#include <System.hpp>

int main()
{
  Window wnd;
  wnd.SetHwnd(GetConsoleWindow());
  wnd.Draw(MRectangle(20, 20, 60, 60, System::ConvertStringToColor("red"), System::ConvertStringToColor("blue")));
  SLEEP(3000);
  wnd.Clear();
  return 0;
}