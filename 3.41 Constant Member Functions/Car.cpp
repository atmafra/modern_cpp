/*
 * Car.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */

#include <iostream>
#include "Car.h"

Car::Car() {
  std::cout << "Car()" << std::endl;
}

Car::Car(float fuel) {
  std::cout << "Car(fuel)" << std::endl;
  FillFuel(fuel);
}

Car::~Car() {
  std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float fuel) {
  // 'this' is used here for disambiguation
  std::cout << "Fuel will be filled up to " << fuel << std::endl;
  this->fuel = fuel;
}

void Car::Accelerate() {
  std::cout << "Accelerating..." << std::endl;
  speed++;
  fuel -= 0.5f;
}

void Car::Brake() {
  std::cout << "Braking..." << std::endl;
  speed = 0.0f;
}

void Car::AddPassengers(int passengers) {
  this->passengers = passengers;
}

void Car::Dashboard() const {

  std::cout << "Fuel: " << fuel << std::endl;
  std::cout << "Speed: " << speed << std::endl;
  std::cout << "Passengers: " << passengers << std::endl;
}
