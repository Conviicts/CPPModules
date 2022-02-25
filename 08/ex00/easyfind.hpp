#ifndef __EASYFIND_HPP
#define __EASYFIND_HPP

#include <iostream>
#include <algorithm>

class	NotFound : public std::exception {
	virtual const char *what() const throw() {
		return ("Not found.");
	}
};

template<template<typename, typename> class T>
typename T<int, std::allocator<int> >::iterator easyfind(T<int, std::allocator<int> > &array, int nb) {
	typename T<int, std::allocator<int> >::iterator pos;
	pos = std::find(array.begin(), array.end(), nb);
	if (pos != array.end())
		return (pos);
	else
		throw NotFound();
}

#endif