#ifndef ITER_HPP
# define ITER_HPP

#include "iostream"

template<typename T>
void func(T &value)
{
	std::cout << value << std::endl;
}

template<typename T>
void iter(T *arr, int len, void func(T& ))
{
	for (int i = 0; i < len; i++)
		func(arr[i]);
}

#endif