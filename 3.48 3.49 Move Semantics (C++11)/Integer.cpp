/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson     : 3.48 3.49 Move Semantics (C++11)
 * File       : Integer.cpp
 * Created on : 29 de jan de 2018
 * Author     : mafra
 *
 */

#include <iostream>
#include "Integer.h"

Integer::Integer() {
  std::cout << "Integer()" << std::endl;
  m_pInt = new int { };
}

Integer::Integer(int value) {
  std::cout << "Integer(int)" << std::endl;
  m_pInt = new int { value };
}

Integer::Integer(const Integer& obj) {
  std::cout << "Integer(const Integer&)" << std::endl;
  m_pInt = new int { *obj.m_pInt };
}

Integer::Integer(Integer&& obj) {
  std::cout << "Integer(Integer&&)" << std::endl;
  m_pInt = obj.m_pInt;
  obj.m_pInt = nullptr;
}

int Integer::GetValue() const {
  return *m_pInt;
}

void Integer::SetValue(int value) {
  *m_pInt = value;
}

void Integer::Allocation() const {
  std::cout << "m_pInt address: " << m_pInt << std::endl;
}

Integer::~Integer() {
  // the destructor must be implemented as the constructor
  // allocates resources
  std::cout << "~Integer()" << std::endl;
  if (m_pInt != nullptr) {
    delete m_pInt;
  }
}

