/*
 * 2.33 Dynamic Memory Allocation in C++ (2D Arrays)
 *
 * dynamic-memory-allocation-2d-arrays.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */
#include <iostream>
#include <cstdlib>

// dynamic memory allocation of 2D Array
void Array2D() {

  int *p1 = new int[3] { 1, 2, 3 };
  int *p2 = new int[3] { 4, 5, 6 };
  int **pArray = new int*[2] { p1, p2 };
  std::cout << "pArray[0][1] = " << pArray[0][1] << std::endl;

  // now free the memory in the same order it was allocated
  delete[] p1;
  delete[] p2;
  delete[] pArray;

  return;
}

int main() {

  // The 2D array is stored in memory as a 1D contiguous region
  // This array does not use dynamic memory allocation (heap)
  int data[2][3] = {
      { 1, 2, 3 }, { 4, 5, 6 }
  };

  // Because of the declaration type, the compiler allows to access elements
  // in the [row][column] format
  std::cout << "data[0][1] = " << data[0][1] << std::endl;

  // calling the dynamic memory allocation version of 2D Array
  Array2D();

  return EXIT_SUCCESS;
}
