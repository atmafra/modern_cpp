/*
 * Project: 3.43 Copy Constructor - Part 1
 *
 * File: copy-constructor-part1.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */
#include <iostream>
#include <cstdlib>
#include "Integer.h"

int main() {

  Integer i1(5);
  std::cout << "i1 = " << i1.GetValue() << std::endl;

  // if a copy constructor is not implemented, the compiler
  // creates one automatically by copying all member variables
  // it is called a shallow copy, as pointer values are simply copied
  Integer i2(i1);
  std::cout << "i2 = " << i2.GetValue() << std::endl;

  // the internal pointers from both objects point
  // to the same region (pointer address copied from copy constructor)
  std::cout << "i1 Allocation: ";
  i1.Allocation();

  std::cout << "i2 Allocation: ";
  i2.Allocation();

  // when the first Integer object gets out of scope, the pointer is deleted
  // when the second Integer object gets out of scope, it tries do delete again
  // the same pointer, causing a segmentation fault
  // error: pointer being freed was not allocated

  return EXIT_SUCCESS;
}
