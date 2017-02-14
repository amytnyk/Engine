#include "Window.hpp"

void Window::SetHwnd(HWND hwnd)
{
  this->hwnd = hwnd;
}

void Window::Draw(MRectangle rect)
{
  HDC hDC = GetDC(this->hwnd);
  HPEN hPen = CreatePen(PS_SOLID, 1, rect.Border_color);
  HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);
  HBRUSH hBrush = CreateSolidBrush(rect.Fill_color);
  HBRUSH hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

  Rectangle(hDC, rect.X, rect.Y, rect.X + rect.SizeX, rect.Y + rect.SizeY);

  SelectObject(hDC, hOldPen);
  DeleteObject(hPen);
  SelectObject(hDC, hOldBrush);
  DeleteObject(hBrush);
  ReleaseDC(this->hwnd, hDC);
}

void Window::Draw(MCircle circle)
{
  HDC hDC = GetDC(this->hwnd);
  HPEN hPen = CreatePen(PS_SOLID, 1, circle.border_color);
  HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);
  HBRUSH hBrush = CreateSolidBrush(circle.fill_color);
  HBRUSH hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

  Ellipse(hDC, circle.X - circle.Radius, circle.Y - circle.Radius, circle.X + circle.Radius, circle.Y + circle.Radius);

  SelectObject(hDC, hOldPen);
  DeleteObject(hPen);
  SelectObject(hDC, hOldBrush);
  DeleteObject(hBrush);
  ReleaseDC(this->hwnd, hDC);
}

void Window::Draw(MEllipse ellipse)
{
  HDC hDC = GetDC(this->hwnd);
  HPEN hPen = CreatePen(PS_SOLID, 1, ellipse.Border_color);
  HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);
  HBRUSH hBrush = CreateSolidBrush(ellipse.Fill_color);
  HBRUSH hOldBrush = (HBRUSH)SelectObject(hDC, hBrush);

  Ellipse(hDC, ellipse.FirstX, ellipse.FirstY, ellipse.LastX, ellipse.LastY);

  SelectObject(hDC, hOldPen);
  DeleteObject(hPen);
  SelectObject(hDC, hOldBrush);
  DeleteObject(hBrush);
  ReleaseDC(this->hwnd, hDC);
}

void Window::Draw(MLine line)
{
  HDC hDC = GetDC(this->hwnd);
  HPEN hPen = CreatePen(PS_SOLID, 2, line.Color);
  HPEN hOldPen = (HPEN)SelectObject(hDC, hPen);

  POINT p = { 0, 0 };
  GetCurrentPositionEx(hDC, &p);
  MoveToEx(hDC, line.FirstX, line.FirstY, &p);
  LineTo(hDC, line.LastX, line.LastY);

  SelectObject(hDC, hOldPen);
  DeleteObject(hPen);
  ReleaseDC(this->hwnd, hDC);
}