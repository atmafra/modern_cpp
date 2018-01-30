/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson     : 3.50 Move Semantics - std::move Function (C++11)
 * File       : move-semantics-std-move-function.cpp
 * Created on : 29 de jan de 2018
 * Author     : mafra
 *
 */

#include <iostream>
#include <cstdlib>
#include "Integer.h"

// Process accepts the Integer object by value
void Process(Integer val) {
}

int main() {

  // uses parameterized constructor
  std::cout << "Integer a(3)" << std::endl;
  Integer a(3);

  // this invokes the copy constructor,
  // because 'a' is a l-value
  std::cout << std::endl << "auto b(a)" << std::endl;
  auto b(a);

  // this also invokes the copy constructor, because
  // Proccess accepts 'a' by value
  std::cout << std::endl << "Process(a)" << std::endl;
  Process(a);

  // we can force move semantics by turning a l-value into a r-value
  // this can be done by using the std::move operator
  std::cout << std::endl << "auto c(std::move(a))" << std::endl;
  auto c(std::move(a));

  // after move(), 'a' contains a nullptr
  // 'a' should not be used anymore

  // this also involves the move constructor
  std::cout << std::endl << "Process(std::move(b))" << std::endl;
  Process(std::move(b));

  std::cout << std::endl;

  return EXIT_SUCCESS;
}
