/*
 * dynamic-memory-allocation-arrays.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */
#include <iostream>
#include <cstdlib>

const int ARRAY_SIZE { 5 };
const char* STRING_VALUE { "C++" };
const size_t STRING_SIZE { strlen(STRING_VALUE) };

void PrintArray(int *arr, size_t size) {
  std::cout << "[ ";
  for (size_t i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "]" << std::endl;
  return;
}

void NewArrays() {

  int *p = new int[ARRAY_SIZE];
  for (int i = 0; i < ARRAY_SIZE; i++) {
    p[i] = i + 1;
  }

  PrintArray(p, ARRAY_SIZE);

  // if we call simply 'delete p' only the first element could be deleted
  // not the entire array
  delete[] p;

  // p is freed, but still points to the previous memory block
  // which is not allocated anymore. p is now a dangling pointer.
  p = nullptr;

  // this is the last line before return, so p would get out of scope anyway
  // in this particular case, the assignment of nullptr wouldn't be necessary

  return;
}

void NewArraysUniformInitialization() {
  // the array is immediately initialized after allocation
  int *p = new int[ARRAY_SIZE] { 1, 2, 3, 4, 5 };
  PrintArray(p, ARRAY_SIZE);
  delete[] p;
  return;
}

void Strings() {
  // memory should always include one extra space for null string terminator
  char *s = new char[STRING_SIZE + 1];

  // using the safe version of 'strcpy': 'strcpy_s'
  // 'strcpy_s is not understood by gcc
  strcpy(s, STRING_VALUE);
  std::cout << s << std::endl;
  return;
}

int main() {
  NewArrays();
  NewArraysUniformInitialization();
  Strings();
  return EXIT_SUCCESS;
}
