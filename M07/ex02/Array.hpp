#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T> class Array {

public:
  Array() {
    this->_arr = new T[0];
    this->_len = 0;
  }
  Array(unsigned int n) {
    this->_arr = new T[n];
    this->_len = n;
  }
  Array(Array const &src) {
    this->_arr = nullptr;
    *this = src;
  }
  ~Array() { delete[] this->_arr; }

  Array &operator=(Array const &rhs) {
    if (this->_arr)
      delete[] this->_arr;
    this->_arr = new T[rhs._len];
    this->_len = rhs._len;
    for (int i = 0; i < this->_len; i++)
      this->_arr[i] = rhs._arr[i];
    return *this;
  }

  T &operator[](int index) {
    if (index >= this->_len || index < 0)
      throw std::out_of_range("Index out of range");
    return _arr[index];
  }
  const T &operator[](int index) const {
    if (index >= this->_len || index < 0)
      throw std::out_of_range("Index out of range");
    return _arr[index];
  }

  int size() const { return this->_len; }

private:
  T *_arr;
  int _len;
};

#endif