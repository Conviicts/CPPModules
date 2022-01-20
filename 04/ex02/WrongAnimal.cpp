#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal") {
	std::cout << "WrongAnimal constructor calledwith name " << _type << "." << std::endl;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << "WrongAnimal destructor called." << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & ref) {
	std::cout << "WrongAnimal assignation constructor called." << std::endl;
	_type = ref._type;
}


WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & ref) {
	std::cout << "WrongAnimal copy constructor called." << std::endl;
	_type = ref._type;

	return (*this);
}

std::string	WrongAnimal::getType(void) const {
	return (_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << "WrongAnimal make sound" << std::endl;
	return ;
}
