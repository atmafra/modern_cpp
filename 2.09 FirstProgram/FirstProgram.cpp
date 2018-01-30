//
//  main.cpp
//  FirstProgram
//
//  Created by Alexandre Teixeira Mafra on 24/11/2017.
//  Copyright © 2017 B2W Digital. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {

  std::cout << "Hello World!" << std::endl;  // prints Hello World

  // scalar types
  int i { 10 };
  std::cout << "i = " << i << std::endl;
  std::cout << "address of i = " << &i << std::endl;
  int *ptr = nullptr;
  std::cout << "*ptr = " << *ptr << std::endl;
  *ptr = 5;
  std::cout << "i = " << i << std::endl;

  char c { 'a' };
  std::cout << "c = " << c << std::endl;

  bool flag { true };
  std::cout << "flag = " << flag << std::endl;

  unsigned int x { 2344 };
  std::cout << "x = " << x << std::endl;

  float f { 123.32f };
  std::cout << "f = " << f << std::endl;

  double d { 8324.1234 };
  std::cout << "d = " << d << std::endl;

  // vector types
  int arr[5] { 1, 2, 3, 4, 5 };
  std::cout << "arr: " << arr << std::endl;

  std::initializer_list<int> list { 1, 2, 3, 4, 5 };

  for (int value : arr) {
    std::cout << "value: " << value << std::endl;
  }

  //int age;
  //std::cout << "Tell me your age: ";
  //std::cin >> age;
  //std::cout << "Your age is " << age << std::endl;

  char buff[512];
  std::cout << "What is your name? ";
  std::cin.getline(buff, 64, '\n');
  std::cout << "Your name is " << buff << std::endl;

  return 0;
}
