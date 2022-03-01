#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template<typename T>
void	iter(T *array, int length, void (*f)(T &a)) {
	for (int i = 0; i < length; i++)
		(*f)(array[i]);
}

template<typename T>
void	print(T &a) {
	std::cout << a << std::endl;
}

#endif