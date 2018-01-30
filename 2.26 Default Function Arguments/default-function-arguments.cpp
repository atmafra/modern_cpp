/*
 * default-function-arguments.cpp
 *
 *  Created on: 26 de jan de 2018
 *      Author: mafra
 */

#include <iostream>

// CreateWindow prototype
void CreateWindow(const char *title, int x, int y, int width, int height);

// CreateWindow implementation with default values for x, y, width, and height
// trick: -1 is an invalid value (x, y, width, and height must be positive). The value is used
// to indicate that a default value should be calculated in the function body.
// e.g.: x, y could be calculated in order to center the window
// e.g.: width, height could be calculated based on the current screen resolution
void CreateWindow(const char *title, int x = -1, int y = -1, int width = -1,
                  int height = -1) {
  using namespace std;
  cout << "Title: " << title << endl;

  if (x == -1) {
    cout << "x     : default" << endl;
  } else {
    cout << "x     : " << x << endl;
  }

  if (y == -1) {
    cout << "y     : default" << endl;
  } else {
    cout << "y     : " << y << endl;
  }

  if (width == -1) {
    cout << "width : default" << endl;
  } else {
    cout << "width : " << width << endl;
  }

  if (height == -1) {
    cout << "height: default" << endl;
  } else {
    cout << "height: " << height << endl;
  }
}

int main() {
  CreateWindow("Notepad 1", 150, 200, 500, 600);
  std::cout << std::endl;
  CreateWindow("Notepad 2");
  std::cout << std::endl;
  CreateWindow("Notepad 3", 100, 200);
  return 0;
}

