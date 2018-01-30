/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson : 3.47 L-values, R-values & R-value references (C++11)
 * File   : lvalues-rvalues-rvalue-references.cpp
 *
 * Created on : 28 de jan de 2018
 * Author     : mafra
 *
 */
#include <iostream>
#include <cstdlib>

// Add() returns a r-value
int Add(int x, int y) {
  return x + y;
}

// Transform() returns a l-value
int& Transform(int& x) {
  x *= x;
  return x;
}

void Print(int& x) {
  std::cout << "Print(int&) (l-value)" << std::endl;
}

void Print(const int& x) {
  std::cout << "Print(const int&) (const l-value)" << std::endl;
}

void Print(int&& x) {
  std::cout << "Print(int&&) (r-value)" << std::endl;
}

int main() {

  /*
   * L-value:
   * . has a name
   * . all variables are L-values
   * . can be assigned values
   * . some expressions return l-values (less common):
   * . l-values persist beyond the expression
   * . result of functions that return by reference
   * . it is possible to create a reference to a l-value
   *
   * R-value:
   * . doesn't have a name
   * . is a temporary value
   * . cannot be assigned values
   * . some expressions return r-values:
   * . r-values do not persist beyond the expression
   * . result of functions that return by value
   * . in C++11 it is possible to create a reference to a r-value
   * . can bind to const references
   */

  // z, y, z  are l-values
  // 5, 8, 10 are r-values
  int x = 5;
  int y = 10;
  int z = 8;

  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "z = " << z << std::endl;

  // expression returns r-value
  // '(x + y)' is a r-value
  // '(x + y) * z' is a r-value
  // result is a l-value
  int result = (x + y) * z;

  std::cout << std::endl << "result = (x + y) * z" << std::endl;
  std::cout << "result = (" << x << " + " << y << ") * " << z << " = " << result
            << std::endl;

  // this expression increments x and then assigns 10 to it
  // ++x is an expression which is a l-value
  // ++x makes x = 6, and then assigns the value 10
  std::cout << std::endl << "x before '++x = 10' = " << x << std::endl;
  ++x = 10;
  std::cout << "x after  '++x = 10' = " << x << std::endl;

  /*
   * R-value References:
   * . a reference to a temporary value
   * . created with the && operator
   * . cannot bind to l-values: always bind to temporaries
   * . l-value references always bind to l-values
   */

  // r1 and r2 are r-values
  int&& r1 = 10;
  int&& r2 = Add(3, 2);

  std::cout << std::endl << "r1 = " << r1 << std::endl;
  std::cout << "r2 = " << r2 << std::endl;

  // int&& r3 = x;
  // error: rvalue reference to type 'int' cannot bind to lvalue of type 'int'

  // r4 and r5 are l-value references
  int& r4 = x;
  std::cout << std::endl << "r4 = " << r4 << std::endl;

  int& r5 = Transform(x);
  std::cout << "r5 = " << r5 << std::endl;

  // checking which version of the 'Print()' function is called
  std::cout << std::endl << "Print(x)" << std::endl;
  Print(x);

  std::cout << std::endl << "Print(3)" << std::endl;
  Print(3);


  return EXIT_SUCCESS;
}
