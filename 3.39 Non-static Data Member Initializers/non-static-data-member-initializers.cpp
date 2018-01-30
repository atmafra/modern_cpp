/*
 * Project: 3.39 Non-static Data Member Initializers
 *
 * File: non-static-data-member-initializers.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */
#include <iostream>
#include <cstdio>
#include "Car.h"

int main() {

  // c1 uses the default constructor
  Car c1;
  c1.Dashboard();

  // c2 uses the fuelAmount parameter constructor
  std::cout << std::endl;
  Car c2(5.0f);
  c2.Dashboard();

  return EXIT_SUCCESS;
}
