/*
 * Project: 3.40 this Pointer
 *
 * File: this-pointer.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */
#include <iostream>
#include <cstdlib>
#include "Car.h"

int main() {

  // this points to the object that invoked the member function
  // can be used for disambiguation when a local variable (parameter)
  // has the same name that a member variable
  Car c1(5);
  std::cout << std::endl << "Initial car status:" << std::endl;
  c1.Dashboard();
  std::cout << std::endl;
  c1.Accelerate();
  std::cout << std::endl << "Car status after acceleration:" << std::endl;
  c1.Dashboard();
  std::cout << std::endl;
  c1.Brake();
  std::cout << std::endl << "Car status after braking:" << std::endl;
  c1.Dashboard();

  return EXIT_SUCCESS;
}
