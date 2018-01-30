/*
 * Project: 3.38 Struct
 *
 * File: struct.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */
#include <iostream>
#include <cstdlib>

struct Point {
  int x;
  int y;
  void Print() {
    std::cout << "(" << x << "," << y << ")" << ::std::endl;
  }
};

void DrawLine(int x1, int y1, int x2, int y2) {
  std::cout << "Line points:" << std::endl;
  std::cout << "  start: (" << x1 << "," << y1 << ")" << std::endl;
  std::cout << "  end  : (" << x2 << "," << y2 << ")" << std::endl;
}

void DrawLine(Point start, Point end) {
  std::cout << "Line points:" << std::endl;
  std::cout << "  start: ";
  start.Print();
  std::cout << "  end  : ";
  end.Print();
}

int main() {

  // a struct is the same thing as a class
  // except that the default access to members is public
  // instead of private, like in classes
  DrawLine(0, 0, 640, 480);

  Point p1;
  p1.x = 0;
  p1.y = 0;

  Point p2;
  p2.x = 640;
  p2.y = 480;

  std::cout << std::endl;
  DrawLine(p1, p2);


  return EXIT_SUCCESS;
}
