#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("Animal") {
	std::cout << "Animal constructor called with name " << _type << "." << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "Animal destructor called." << std::endl;
}

AAnimal::AAnimal(AAnimal const & ref) {
	std::cout << "Animal assignation constructor called." << std::endl;
	_type = ref._type;
}


AAnimal	&AAnimal::operator=(AAnimal const & ref) {
	std::cout << "Animal copy constructor called." << std::endl;
	_type = ref._type;

	return (*this);
}

std::string	AAnimal::getType(void) const {
	return (_type);
}

void	AAnimal::makeSound(void) const {
	std::cout << "Animal make sound" << std::endl;
	return ;
}
