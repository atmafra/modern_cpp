/*
 * function-pointers.cpp
 *
 *  Created on: 27 de jan de 2018
 *      Author: mafra
 */
#include <iostream>

// prints 'ch' 'count' times
void Print(int count, char ch) {
  using namespace std;
  for (int i = 0; i < count; i++) {
    cout << ch;
  }
  cout << endl;
}

// displays a program end message
void EndMessage() {
  using namespace std;
  cout << "End of program" << endl;
  return;
}

int main() {

  Print(5, '*');

  // pointerToPrint is a pointer to the function Print
  void (*pointerToPrint)(int, char) {Print};

  // the function can be invoked by de-referencing
  (*pointerToPrint)(8, '@');

  // or just by calling the pointer variable, as if it was the function itself
  pointerToPrint(5, '+');

  // function pointers can be used to invoke a function without knowing its name
  // e.g.: function atexit(); the function receives no parameters and return type is void
  // the particular function 'void EndMessage(void)' is registered with atexit()
  atexit(EndMessage);

  // just to check that 'atexit()' only registers the function pointer, does not execute the function
  using namespace std;
  cout << "End of main" << endl;

  return 0;
}
