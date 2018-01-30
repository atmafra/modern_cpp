/*
 * const-assignment.cpp
 *
 *  Created on: 26 de jan de 2018
 *      Author: mafra
 */

#include <iostream>

int main() {

  using namespace std;

  int x { 5 };
  int y { 7 };
  const int MAX { 12 };
  int &ref_x1 { x };
  const int &ref_x2 { x };

  // Try to modify the pointer (e.g.: ptr1) and the pointee value (*ptr1)

  // ptr1: pointer to const int
  const int *ptr1 = &x;
  cout << "*ptr1 = " << *ptr1 << endl;
  ptr1 = &y;
  cout << "*ptr1 = " << *ptr1 << endl;
  // *ptr1 *= y; // error: read-only variable is not assignable
  x *= 2;
  cout << "*ptr1 = " << *ptr1 << endl;

  // ptr2: constant pointer to int
  int * const ptr2 { &x };
  cout << "*ptr2 = " << *ptr2 << endl;
  // ptr2 = &y; // error: variable 'ptr2' declared const here
  *ptr2 = 9;
  cout << "*ptr2 = " << *ptr2 << endl;

  // ptr3: constant pointer to constant int
  const int * const ptr3 { &x };
  // ptr3 = &y; // error: variable  ptr3  declared const here
  // *ptr3 = 13; // error: read-only variable is not assignable
  cout << "*ptr3 = " << *ptr3 << endl;

  // Find which of the declarations are valid
  // If invalid, correct the ceclaration
  const int *ptr4 { &MAX };
  cout << "*ptr4 = " << *ptr4 << endl;
  // int &ptr5 { &MAX }; // error: cannot initialize a value of type 'int' with an rvalue of type 'const int *'
  const int &ptr5 { MAX };
  cout << "ptr5 = " << ptr5 << endl;

  const int &r1 { ref_x1 };
  cout << "r1 = " << r1 << endl;

  // int &r2 = ref_x2; // error: binding value of type 'const int' to reference to type 'int' drops 'const' qualifier
  const int &r2 = ref_x2;  // correction: added 'const'

  // int * &p_ref1 { ptr1 }; // error: cannot initialize a value of type 'int *' with an lvalue of type 'const int *'
  const int * &p_ref1 { ptr1 };
  cout << "*p_ref1 = " << *p_ref1 << endl;

  // const int * &p_ref2 { ptr2 }; // error: non-const lvalue reference to type 'const int *' cannot bind to an initializer list temporary
  //const int * &p_ref2 { ptr2 };

  return 0;
}
