/*
 * Car.h
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */

#ifndef CAR_H_
#define CAR_H_

class Car {
 private:
  float fuel;
  float speed;
  int passengers;

 public:

  // default constructor
  Car();

  // parameterized constructor: 1 or more arguments
  // the existence of a parameterized constructor blocks the default constructor
  Car(float fuelAmout);

  // destructor:
  // releases resources allocated by the constructor
  // a class can have only one destructor
  // the destructor cannot be overloaded
  // accepts no arguments
  virtual ~Car();

  void FillFuel(float amount);
  void Accelerate();
  void Brake();
  void AddPassengers(int count);
  void Dashboard();

};

#endif /* CAR_H_ */
