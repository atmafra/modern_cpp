/*
 * 2.14 Uniform Initialization
 *
 * uniform-initialization.cpp
 *
 *  Created on: 28 de jan de 2018
 *      Author: mafra
 */
#include <iostream>

int main() {

  /*
   * scalar types can be initialized with = or ()
   * array types have to be initialized with {}
   *
   * Uniform Initialization: solves the problem of different
   * ways to initialize scalar and vector types
   * {} can be used to initialize all types
   * {} without a value is used to initialize with a default value
   */

  using namespace std;

  // scalar types
  int int1 = 1;
  int int2 { 1 };  // uniform version

  char char1('a');
  char char2 { 'a' };  // uniform version

  bool bool1 = true;
  bool bool2 { true };  // uniform version

  unsigned int uint1 = 2344;
  unsigned int uint2 { 2344 };  // uniform version

  float flt1 = 123.32f;
  float flt2 { 123.32f };  // uniform version

  double dbl1 = 8324.1324;
  double dbl2 { 8324.1324 };  // uniform version

  cout << "int1 = " << int1 << endl;
  cout << "int2 = " << int2 << endl;

  cout << endl << "char1 = " << char1 << endl;
  cout << "char2 = " << char2 << endl;

  cout << endl << "bool1 = " << bool1 << endl;
  cout << "bool2 = " << bool2 << endl;

  cout << endl << "uint1 = " << uint1 << endl;
  cout << "uint2 = " << uint2 << endl;

  cout << endl << "flt1 = " << flt1 << endl;
  cout << "flt2 = " << flt2 << endl;

  cout << endl << "dbl1 = " << dbl1 << endl;
  cout << "dbl2 = " << dbl2 << endl;

  // checking default values of scalar types
  int int_d { };
  char char_d { };
  bool bool_d { };
  unsigned int uint_d { };
  float flt_d { };
  double dbl_d { };

  cout << endl << "Default values:" << endl;
  cout << "default int = " << int_d << endl;
  cout << "default char = " << char_d << endl;
  cout << "default boolean = " << bool_d << endl;
  cout << "default unsigned int = " << uint_d << endl;
  cout << "default float = " << flt_d << endl;
  cout << "default double = " << dbl_d << endl;

  // uniform initialization does not allow for type conversion
  float flt3 { 3.2f };
  // int int3 { flt3 };
  // error: error: type 'float' cannot be narrowed to 'int' in initializer list

  // this behavior prevents initialization bugs

  // vector types
  int arr[5] = { 1, 2, 3, 4, 5 };

  // the list on the right side has now a specific type: initializer_list
  initializer_list<int> list { 1, 2, 3, 4, 5 };

  return 0;
}
