/*
 * class.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */
#include <iostream>
#include <cstdlib>

#include "Car.h"

int main() {

  /*
   * Class
   *
   * a blueprint/template/recipe
   * represents an abstraction
   * every object is instantiated from a class
   * every object is an instance of a class
   * a class can have multiple independent instances
   */

  // car1: first instance of Car
  Car car1;  // invokes the default constructor

  car1.FillFuel(6);
  for (int i = 0; i < 4; i++) {
    car1.Accelerate();
  }
  car1.Dashboard();

  // car2: second instance of car
  Car car2(4);

  for (int i = 0; i < 4; i++) {
    car2.Accelerate();
  }
  car2.Dashboard();

  return EXIT_SUCCESS;
}
