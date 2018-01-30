/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson : 3.44 Copy Constructor - Part 2
 * File   : copy-constructor-part2.cpp
 *
 * Created on : 28 de jan de 2018
 * Author     : mafra
 *
 */
#include <iostream>
#include <cstdlib>
#include "Integer.h"

int main() {

  Integer i1(5);
  std::cout << "i1 = " << i1.GetValue() << std::endl;

  // if a copy constructor is implemented, the compiler
  // uses this user-defined copy constructor
  Integer i2(i1);
  std::cout << "i2 = " << i2.GetValue() << std::endl;

  // the internal pointers from the objects point
  // to different memory locations, because of the use
  // of the user-defined deep copy constructor
  std::cout << "i1 Allocation: ";
  i1.Allocation();

  std::cout << "i2 Allocation: ";
  i2.Allocation();

  // the internal pointers can be deleted independently

  /*
   * The Rule of 3
   *
   * If 1 of the following is implemented, then
   * probably the other 2 should be implemented too:
   *
   * 1. Destructor
   * 2. Copy Constructor
   * 3. Copy Assignment Operator
   *
   * If any of the three is not implemented,
   * this can lead to a memory leak or shallow copy
   *
   */

  return EXIT_SUCCESS;
}
