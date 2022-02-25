#include "easyfind.hpp"
#include <iostream>
#include <list>
#include <vector>

int main( void ) {
	std::vector<int> vecc;
	
	for (int i = 0; i < 20; i++)
		vecc.push_back(i);
	for (std::vector<int>::iterator i = vecc.begin(); i != vecc.end(); i++)
		std::cout << *i << " ";
	std::cout << std::endl;
	
	try {
		std::vector<int>::iterator i = easyfind(vecc, 18);
		std::cout << *i << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
	try {
		std::vector<int>::iterator i = easyfind(vecc, 42);
		std::cout << *i << std::endl;
	} catch (std::exception &ex) {
		std::cout << ex.what() << std::endl;
	}
}