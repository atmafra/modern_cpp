/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson : 3.45 Delegating Constructors
 * File   : delegating-constructors.cpp
 *
 * Created on : 28 de jan de 2018
 * Author     : mafra
 *
 */
#include <iostream>
#include <cstdlib>
#include "Car.h"

int main() {

  // A delegating constructor allows a constructor
  // to invoke another constructor.
  // This serves as a replacement for common initialization,
  // reducing the duplicate initialization code.

  // c1 uses the default constructor
  std::cout << "Allocating c1 using the default constructor" << std::endl;
  Car c1;

  // c2 uses the fuel parameter constructor
  std::cout << std::endl << "Allocating c2 using the fuel parameter constructor"
            << std::endl;
  Car c2(5.0f);

  // c3 uses the (fuel,passengers) constructor
  std::cout << std::endl
            << "Allocating c3 using the (fuel,passengers) constructor"
            << std::endl;
  Car c3(5.0f, 3);

  // check the status of the three cars
  std::cout << std::endl << "Initial c1 status:" << std::endl;
  c1.Dashboard();

  std::cout << std::endl << "Initial c2 status:" << std::endl;
  c2.Dashboard();

  std::cout << std::endl << "Initial c3 status:" << std::endl;
  c3.Dashboard();

  std::cout << std::endl;


  return EXIT_SUCCESS;
}
