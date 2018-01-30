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

  // non-static: members bound to class instances
  // don't use the word 'static'
  float fuel { 0.0f };
  float speed { 0.0f };
  int passengers { 0 };

 public:

  // default constructor
  Car();

  // parameterized constructor: 1 or more arguments
  // the existence of a parameterized constructor blocks the default constructor
  Car(float fuelAmount);

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

  // the Dashboard() function does not modify any member variables
  // because of this, it could be declared 'const'
  void Dashboard() const;
};

#endif /* CAR_H_ */
