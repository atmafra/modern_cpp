/*
 * namespaces.cpp
 *
 *  Created on: 27 de jan de 2018
 *      Author: mafra
 */

#include <iostream>

namespace Average {

// two functions 'Calculate(float,float)' with the same name and signature
// would lead to a name clash. Two distinct namespaces are defined
// to differentiate between them

// Calculate returns the average between a and b
float Calculate(float a, float b) {
  std::cout << "Average::Calculate(" << a << "," << b << ") = ";
  return (a + b) / 2;
}
}

namespace Basic {

// Calculate returns the sum of a and b
float Calculate(float a, float b) {
  std::cout << "Basic::Calculate(" << a << "," << b << ") = ";
  return a + b;
}
}

// the Sort namespace groups functions related to sorting operations
namespace Sort {
void QuickSort() {
}
void InsertionSort() {
}
void MergeSort() {
}

// Comparison is a namespace inside Sort
namespace Comparison {
void Less() {
  std::cout << "Less()" << std::endl;
  return;
}

// it is possible to define namespaces without a name
// the elements inside have the scope of the current file
namespace {
void InternalFunction() {
  std::cout << "InternalFunction()" << std::endl;
}
}

void Greater() {
  std::cout << "Greater()" << std::endl;
  return;
}
}
}

int main() {

  const float a { 3.9f }, b { 8.2f };
  std::cout << "a = " << a << std::endl;
  std::cout << "b = " << b << std::endl;

  // method 1: reference the namespace in the function call
  std::cout << std::endl << "Explicitely calling Average::Calculate"
            << std::endl;
  std::cout << Average::Calculate(a, b) << std::endl;

  // method 2: recall the entire namespace
  std::cout << std::endl << "using namespace Average and calling Calculate"
            << std::endl;
  using namespace Average;
  std::cout << Calculate(a, b) << std::endl;

  // method 3: recall only the function from the namespace
  std::cout << std::endl << "using Average::Calculate and calling Calculate"
            << std::endl;
  using Average::Calculate;
  std::cout << Calculate(a, b) << std::endl;

  // method 1 for BasicP:Calculate
  std::cout << std::endl << "Explicitely calling Basic::Calculate" << std::endl;
  std::cout << Basic::Calculate(a, b) << std::endl;

  // method 2 for Basic::Calculate
  std::cout << std::endl << "using namespace Basic and calling Calculate"
            << std::endl;
  using namespace Basic;
  std::cout << Calculate(a, b) << std::endl;

  // method 3 for Basic::Calculate
  std::cout << std::endl << "using Basic::Calculate and calling Calculate"
            << std::endl;
  using Basic::Calculate;
  // program does not compile anymore: call to 'Calculate' is ambiguous
  //std::cout << Calculate(a, b) << std::endl;

  // nested namespaces

  // method 1: explicit namespace
  std::cout << std::endl;
  Sort::Comparison::Less();

  // method 2: using namespace
  using namespace Sort::Comparison;
  Less();

  // method 3: using Sort::Comparison:::Less
  using Sort::Comparison::Less;
  Less();

  // file namespace
  InternalFunction();

  return 0;
}
