#include "Animal.hpp"

Animal::Animal(void) : _type("Animal") {
	std::cout << "Animal constructor called with name " << _type << "." << std::endl;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called." << std::endl;
}

Animal::Animal(Animal const & ref) {
	std::cout << "Animal assignation constructor called." << std::endl;
	_type = ref._type;
}


Animal	&Animal::operator=(Animal const & ref) {
	std::cout << "Animal copy constructor called." << std::endl;
	_type = ref._type;

	return (*this);
}

std::string	Animal::getType(void) const {
	return (_type);
}

void	Animal::makeSound(void) const {
	std::cout << "Animal make sound" << std::endl;
	return ;
}
