#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat constructor called." << std::endl;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called." << std::endl;
}

WrongCat::WrongCat(WrongCat const & ref) {
	std::cout << "WrongCat assignation constructor called." << std::endl;
	_type = ref._type;
}


WrongCat	&WrongCat::operator=(WrongCat const & ref) {
	std::cout << "WrongCat copy constructor called." << std::endl;
	_type = ref._type;

	return (*this);
}

void	WrongCat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
	return ;
}
