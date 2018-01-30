/*
 * Udemy - Beggining Modern C++ (C++11/C++14)
 * by Umar Lone, Poash Technologies
 *
 * Lesson     : 3.48 3.49 Move Semantics (C++11)
 * File       : Integer.h
 * Created on : 29 de jan de 2018
 * Author     : mafra
 *
 */

#ifndef INTEGER_H_
#define INTEGER_H_

class Integer {

 private:
  int *m_pInt { nullptr };

 public:

  // default constructor
  Integer();

  // parameterized copy constructor
  Integer(int value);

  // copy constructor
  Integer(const Integer& obj);

  // move constructor
  Integer(Integer&& obj);

  int GetValue() const;
  void SetValue(int value);
  void Allocation() const;
  virtual ~Integer();
};

#endif /* INTEGER_H_ */

