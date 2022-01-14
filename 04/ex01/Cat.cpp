#include "Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(Cat const & ref) {
	std::cout << "Cat assignation constructor called." << std::endl;
	_type = ref._type;
}


Cat	&Cat::operator=(Cat const & ref) {
	std::cout << "Cat copy constructor called." << std::endl;
	_type = ref._type;

	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
	return ;
}
