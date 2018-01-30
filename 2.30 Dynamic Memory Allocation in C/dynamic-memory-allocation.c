/*
 * dynamic-memory-allocation.c
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */
#include <stdio.h>
#include <stdlib.h>

#define __ARRAY_SIZE_ 5

int print_array(int *arr, size_t size) {

  if (arr == NULL) {
    fprintf(stderr, "Unable to print a NULL array\n");
    return EXIT_FAILURE;
  }

  printf("[ ");
  for (int i = 0; i < size; i++) {
    printf("%d ", arr[i]);
  }
  printf("]\n");

  return EXIT_SUCCESS;
}

int main() {

  // malloc: raw memory allocation for a pointer to int
  int *p = (int*) malloc(sizeof(int));
  if (p == NULL) {
    fprintf(stderr, "Failed to allocate memory using malloc()\n");
    return -1;
  }
  *p = 5;
  printf("*p = %d\n", *p);
  free(p);

  // p is now a dangling pointer: it points to an invalid address
  // everytime a pointer is free'd, it must point to NULL
  p = NULL;

  // calloc: allocation and initialization of a number of
  // elements of the same size
  // all positions are initialized with zeroes; no other value can be specified
  int *q = (int*) calloc(1, sizeof(int));
  if (q == NULL) {
    fprintf(stderr, "Failed to allocate memory using calloc()\n");
    return -1;
  }
  *q = 7;
  printf("*q = %d\n", *q);
  free(q);
  q = NULL;

  // allocating memory for __ARRAY_SIZE_ integers

  // using malloc
  int *p_array = (int*) malloc(__ARRAY_SIZE_ * sizeof(int));
  if (p_array == NULL) {
    printf("Error allocating memory for %d integers using malloc()\n",
           __ARRAY_SIZE_);
    return EXIT_FAILURE;
  }

  for (int i = 0; i < __ARRAY_SIZE_; i++) {
    p_array[i] = i;
  }

  // using calloc
  int *q_array = (int*) calloc(__ARRAY_SIZE_, sizeof(int));
  if (q_array == NULL) {
    printf("Error allocating memory for %d integers using calloc()\n",
           __ARRAY_SIZE_);
    return EXIT_FAILURE;
  }

  for (int i = 0; i < __ARRAY_SIZE_; i++) {
    q_array[i] = i * i;
  }

  // prints the arrays
  printf("p_array = ");
  print_array(p_array, __ARRAY_SIZE_);

  printf("q_array = ");
  print_array(q_array, __ARRAY_SIZE_);

  // if the memory allocated in any of the cases is not free'd
  // then we have a memory leak
  free(p_array);
  free(q_array);

  // trying to print after free: invalid values, dangling pointers
  p_array = NULL;
  q_array = NULL;

  print_array(p_array, __ARRAY_SIZE_);
  print_array(q_array, __ARRAY_SIZE_);

  return EXIT_SUCCESS;
}




