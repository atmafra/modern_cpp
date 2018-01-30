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

Car::Car(float fuelAmount) {
  std::cout << "Car(fuelAmount)" << std::endl;
  fuel = fuelAmount;
}

Car::~Car() {
  std::cout << "~Car()" << std::endl;
}

void Car::FillFuel(float amount) {
  fuel = amount;
}

void Car::Accelerate() {
  speed++;
  fuel -= 0.5f;
}

void Car::Brake() {
  speed = 0;
}

void Car::AddPassengers(int count) {
  passengers = count;
}

void Car::Dashboard() {

  std::cout << "Fuel: " << fuel << std::endl;
  std::cout << "Speed: " << speed << std::endl;
  std::cout << "Passengers: " << passengers << std::endl;
}
