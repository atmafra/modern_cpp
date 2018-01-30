/*
 * for-each.cpp
 *
 *  Created on: 26 de jan de 2018
 *      Author: mafra
 */

#include <iostream>

int main() {

  using namespace std;

  int arr[] = { 1, 2, 3, 4, 5 };

  // traditional loop
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // range loop
  for (int value : arr) {
    cout << value << " ";
  }
  cout << endl;

  // range loop with auto and reference
  // without the reference, a copy of the original value is created
  // if declared as a reference, modifying the value modifies the original array
  for (auto &value : arr) {
    cout << value << " ";
  }
  cout << endl;

  // range loop with const auto reference
  // used const to avoid changes of the value
  for (const auto &value : arr) {
    cout << value << " ";
  }
  cout << endl;

  // same thing, using an initializer_list as the range
  // the range does not exist outside the loop: no need to worry about modifying
  for (auto value : { 1, 2, 3, 4, 5 }) {
    cout << value << " ";
  }
  cout << endl;

  return 0;
}
