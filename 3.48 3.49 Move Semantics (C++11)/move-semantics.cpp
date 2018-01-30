/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson     : 3.48 Move Semantics - Concept (C++11)
 * File       : move-semantics-concept.cpp
 * Created on : 29 de jan de 2018
 * Author     : mafra
 *
 */

#include <iostream>
#include <cstdlib>
#include "Integer.h"

Integer Add(const Integer& a, const Integer& b) {
  Integer temp;  // default constructor
  temp.SetValue(a.GetValue() + b.GetValue());
  return temp;
}

int main() {

  /*
   * Copy Semantics:
   * . copy is implemented by the copy constructor
   * . a copy of the object state is created
   * . with deep copy, new resources are allocated
   * . wasteful in case the copy is created from a temporary
   * . instead, the state can be moved from the source object
   *
   * Move Semantics:
   * . resources allocated in the source object are transferred (moved)
   *   to the new object
   * . allocated resources addresses are copied to the new object,
   *   just like in a shallow copy
   * . transferred resources point to 'nullptr' after the transference
   * . the new object "steals" resources from the source object
   * . much faster than deep copy: does not involve memory allocation
   */

  Integer a(1), b(3);

  std::cout << "a = " << a.GetValue() << std::endl;
  std::cout << "b = " << b.GetValue() << std::endl;

  //in this case, 'Add(a,b)' is a temporary value
  std::cout << std::endl;
  a.SetValue(Add(a, b).GetValue());
  std::cout << "a = " << a.GetValue() << std::endl;

  /*
   * Rule of 5
   *
   * All should be implemented if any of these is implemented:
   * 1. Destructor
   * 2. Copy constructor
   * 3. Copy assignment operator
   * 4. Move constructor
   * 5. Move assignment operator
   *
   */

  return EXIT_SUCCESS;
}


