#include "Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
}

Dog::~Dog(void) {
	
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(Dog const & ref) {
	std::cout << "Dog assignation constructor called." << std::endl;
	_type = ref._type;
}


Dog	&Dog::operator=(Dog const & ref) {
	std::cout << "Dog copy constructor called." << std::endl;
	_type = ref._type;

	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woooff" << std::endl;
	return ;
}
