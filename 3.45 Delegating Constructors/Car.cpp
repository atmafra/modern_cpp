/*
 * Car.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */

#include <iostream>
#include "Car.h"

int Car::totalCount { 0 };

Car::Car()
    : Car(0) {
  std::cout << "-- constructor Car()" << std::endl;
}

Car::Car(float fuel)
    : Car(fuel, 0) {
  std::cout << "-- constructor Car(fuel=" << fuel << ")" << std::endl;
}

Car::Car(float fuel, int passengers) {
  std::cout << "-- constructor Car(fuel=" << fuel << ", passengers="
            << passengers << ")" << std::endl;
  FillFuel(fuel);
  AddPassengers(passengers);
  ++totalCount;
}

Car::~Car() {
  std::cout << "-- destructor ~Car()" << std::endl;
  --totalCount;
}

void Car::FillFuel(float fuel) {
  // 'this' is used here for disambiguation
  std::cout << "-- FillFuel(" << fuel << ")" << std::endl;
  this->fuel = fuel;
}

void Car::Accelerate() {
  std::cout << "-- Accelerate()" << std::endl;
  speed++;
  fuel -= 0.5f;
}

void Car::Brake() {
  std::cout << "-- Brake()" << std::endl;
  speed = 0.0f;
}

void Car::AddPassengers(int passengers) {
  std::cout << "-- AddPassengers(" << passengers << ")" << std::endl;
  this->passengers = passengers;
}

void Car::Dashboard() const {
  std::cout << "Fuel       : " << fuel << std::endl;
  std::cout << "Speed      : " << speed << std::endl;
  std::cout << "Passengers : " << passengers << std::endl;
  ShowCount();
}

void Car::ShowCount() {
  std::cout << "Total cars : " << totalCount << std::endl;
}

