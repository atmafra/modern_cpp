/*
 * Project: 3.43 Copy Constructor - Part 1
 *
 * File: Integer.h
 *
 * Created on: 28 de jan de 2018
 * Author: mafra
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

  // parameterized constructor
  Integer(int value);

  // no copy constructor
  // a shallow copy constructor will be synthesized
  // by the compiler if copy constructor is called

  int GetValue() const;
  void SetValue(int value);
  void Allocation() const;
  virtual ~Integer();
};

#endif /* INTEGER_H_ */
