/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson : 2.12 Basic IO
 * File   : basic-io.cpp
 *
 * Created on : 28 de jan de 2018
 * Author     : mafra
 *
 */
#include <iostream>

int Factorial(int x) {
  int result = 1;
  for (int i = 1; i <= x; i++) {
    result *= i;
  }
  return result;
}

int main() {
  int i = 5;
  int result = Factorial(i);
  std::cout << "Factorial of " << i << " is " << result << std::endl;
  return 0;
}



