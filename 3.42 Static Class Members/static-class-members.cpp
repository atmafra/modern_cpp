/*
 * Project: 3.42 Static Class Members
 *
 * File: static-class-members.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */
#include <iostream>
#include <cstdlib>
#include "Car.h"

int main() {

  // static member variables
  // member variables qualified with the 'static' keyword
  // not part of the object, belong to the class
  // only one copy exists (per class)
  // this single copy is shared among all the objects of the class

  std::cout << "Constructing car c1" << std::endl;
  Car c1(5.0f);
  std::cout << std::endl << "Initial c1 status:" << std::endl;
  c1.Dashboard();

  std::cout << std::endl << "Show the current number of cars:" << std::endl;
  Car::ShowCount();

  std::cout << std::endl << "Constructing car c2" << std::endl;
  Car c2(6.0f);
  std::cout << std::endl << "Initial c2 status:" << std::endl;
  c2.Dashboard();

  std::cout << std::endl << "Show the current number of cars:" << std::endl;
  Car::ShowCount();

  std::cout << std::endl << "Accelerating c2" << std::endl;
  c2.Accelerate();
  std::cout << std::endl << "Adding passengers to c2" << std::endl;
  c2.AddPassengers(3);

  std::cout << std::endl << "Final c2 status:" << std::endl;
  c2.Dashboard();
  std::cout << std::endl;

  return EXIT_SUCCESS;
}

