/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson : 3.46 Default & Deleted Functions (C++11)
 * File   : default-and-deleted-functions.cpp
 *
 * Created on : 28 de jan de 2018
 * Author     : mafra
 *
 */

#include <iostream>
#include <cstdlib>

// simplified implementation of the Integer class
class Integer {

 private:

  int m_Value { 0 };

 public:

  // default constructor:
  // wouldn't be necessary, because initialization with defaults is ok here
  // if there was no parameterized constructor, default constructor
  // could be omitted
  // instead, C++11 allows to request for a default synthesized constructor
  // by using the keyword 'default'
  Integer() = default;

  // parameterized constructor
  Integer(int value) {
    m_Value = value;
  }

  // the copy constructor
  // actually not necessary: compiler would synthesize one
  Integer(Integer&) = default;

  // returns the value
  int GetValue() const {
    return m_Value;
  }
};

class Integer2 {

 private:

  int m_Value;

 public:

  // the keyword delete prevents the compiler from generating
  // a synthesized version of the specific method

  // deleted default constructor
  Integer2() = delete;

  // parameterized constructor
  Integer2(int value) {
    m_Value = value;
  }

  // deleted copy constructor
  Integer2(Integer2&) = delete;

  // returns the value
  int GetValue() const {
    return m_Value;
  }

  // function SetValue sets the internal int value
  void SetValue(int value) {
    m_Value = value;
  }

  // the following definitions prevent the compiler from accepting
  // conversion versions of the function
  void SetValue(float value) = delete;
  void SetValue(double value) = delete;
};


int main() {

  Integer int1;
  Integer int2(3);
  Integer int3(int2);

  std::cout << "int1 = " << int1.GetValue() << std::endl;
  std::cout << "int2 = " << int2.GetValue() << std::endl;
  std::cout << "int3 = " << int3.GetValue() << std::endl;

  // Integer2 int4;
  // error: call to deleted constructor of 'Integer2'

  Integer2 int5(5);

  // Integer2 int6(int5);
  // error: call to deleted constructor of 'Integer2'

  std::cout << "int5 = " << int5.GetValue() << std::endl;

  int5.SetValue(7);

  // int5.SetValue(13.4f);
  // int5.SetValue(13.4);
  // error: call to deleted member function 'SetValue'

  return EXIT_SUCCESS;
}
