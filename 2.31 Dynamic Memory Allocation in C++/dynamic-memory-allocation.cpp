/*
 * dynamic-memory-allocation.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */
#include <iostream>
#include <cstdlib>

void Malloc() {

  std::cout << "Malloc():" << std::endl;

  // malloc is a function
  int *p = (int*) malloc(sizeof(int));

  // when memory cannot be allocated, malloc() returns NULL
  if (p == NULL) {
    std::cerr << "Error allocating memory for int" << std::endl;
  }

  *p = 5;
  std::cout << "*p = " << *p << std::endl;
  free(p);
  p = NULL;

  return;
}

void New() {

  std::cout << "New():" << std::endl;

  int *p = nullptr;

  try {
    // new can initialize the pointed value
    p = new int(7);
  } catch (std::bad_alloc &ba) {
    // new throws an exception when allocation fails: std::bad_alloc
    std::cerr << "Error allocating memory for int: " << ba.what() << std::endl;
    return;
  }

  std::cout << "*p = " << *p << std::endl;
  delete p;
  p = nullptr;
  return;
}


int main() {

  Malloc();
  New();

  return EXIT_SUCCESS;
}
