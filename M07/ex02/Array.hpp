#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

template <typename T>
class Array
{

public:
	Array()
	{
		this->_arr = new T[0];
		this->_size = 0;
	}
	Array(unsigned int n)
	{
		this->_arr = new T[n];
		_size = n;
	}
	Array(Array const &src)
	{
		this->_arr =  nullptr;
		*this = src;
	}
	~Array()
	{
		delete [] this->_arr;
	}

	Array &operator=(Array const &rhs)
	{
		if(this->_arr)
			delete [] this->_arr;
		this->_arr = new T[rhs._size];
		this->_size = rhs._size;
		for (int i = 0; i < this->_size; i++)
			this->_arr[i] = rhs._arr[i];
		return *this;
	}

	T &operator[](int index)
	{
		if (index > _size)
			throw std::out_of_range("Index out of range");
		return _arr[index];
	}

private:
	T *_arr;
	int _size;
};

#endif /* *********************************************************** ARRAY_H */