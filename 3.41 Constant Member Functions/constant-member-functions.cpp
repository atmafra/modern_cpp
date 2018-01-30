/*
 * Project: 3.41 Constant Member Functions
 *
 * File: constant-member-functions.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */
#include <iostream>
#include <cstdlib>
#include "Car.h"

int main() {

  // const member functions
  // member functions qualified with the 'const' keyword
  // cannot change any value of any member variables
  // useful for creating read-only functions
  // constant object can invoke only constant member functions

  const Car c1(5.0f);

  // a const Car cannot accelerate...
  // the accelerate member function modifies member variables
  // c1.Accelerate();
  c1.Dashboard();

  return EXIT_SUCCESS;
}

