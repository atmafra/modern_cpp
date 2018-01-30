/*
 * Project: 3.43 Copy Constructor - Part 1
 *
 * File: Integer.cpp
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
 *
 */

#include <iostream>
#include "Integer.h"

Integer::Integer() {
  m_pInt = new int { };
}

Integer::Integer(int value) {
  m_pInt = new int { value };
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
  if (m_pInt != nullptr) {
    delete m_pInt;
  }
}

