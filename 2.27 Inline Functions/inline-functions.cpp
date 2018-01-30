/*
 * inline-functions.cpp
 *
 *  Created on: 27 de jan de 2018
 *      Author: mafra
 */
#include <iostream>

// function as a macro
#define __SQUARE_(x) x*x

// function as a macro (braces added)
#define __SQUARE2_(x) (x)*(x)

// regular function
int Square(int x) {
  return x * x;
}

// better version: inline function
inline int SquareInline(int x) {
  return x * x;
}

int main() {

  using namespace std;

  int val { 5 };
  cout << "val = " << val << endl << endl;

  // using the regular function
  cout << "Regular Function Square(int x):" << endl;
  cout << "Square(" << val << ") = " << Square(val) << endl;
  cout << "Square(" << val + 1 << ") = " << Square(val + 1) << endl << endl;

  // now using the macro
  // macros have problems, as they work by text substitution
  cout << "Macro __SQUARE_(x):" << endl;
  cout << "__SQUARE_(" << val << ") = " << __SQUARE_(val) << endl;
  cout << "__SQUARE_(" << val + 1 << ") = " << __SQUARE_(val+1) << endl << endl;

  // it is possible to use workarounds, but not trivial
  cout << "Improved macro __SQUARE2_(x):" << endl;
  cout << "__SQUARE2_(" << val << ") = " << __SQUARE2_(val) << endl;
  cout << "__SQUARE2_(" << val + 1 << ") = " << __SQUARE2_(val + 1) << endl
       << endl;

  // inline function: replaces the function call with the body of the function
  cout << "Inline Function SquareInline(int x):" << endl;
  cout << "SquareInline(" << val << ") = " << SquareInline(val) << endl;
  cout << "SquareInline(" << val + 1 << ") = " << SquareInline(val + 1) << endl;

  return 0;
}
