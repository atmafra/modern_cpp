/*
 * Project: 3.44 Copy Constructor - Part 2
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

  // parameterized copy constructor
  Integer(int value);

  // deep copy constructor
  Integer(const Integer& obj);

  int GetValue() const;
  void SetValue(int value);
  void Allocation() const;
  virtual ~Integer();
};

#endif /* INTEGER_H_ */
