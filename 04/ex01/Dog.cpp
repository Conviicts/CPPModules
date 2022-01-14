#include "Dog.hpp"

Dog::Dog() {
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Dog constructor called." << std::endl;
	_brain->printIdeas();
}

Dog::~Dog(void) {
	delete _brain;
	std::cout << "Dog destructor called." << std::endl;
}

Dog::Dog(Dog const & ref) {
	std::cout << "Dog assignation constructor called." << std::endl;
	_type = ref._type;
	_brain = new Brain(*ref._brain);
	_brain->printIdeas();
}


Dog	&Dog::operator=(Dog const & ref) {
	std::cout << "Dog copy constructor called." << std::endl;
	_type = ref._type;
	_brain = new Brain(*ref._brain);
	_brain->printIdeas();
	return (*this);
}

void	Dog::makeSound(void) const {
	std::cout << "Woooff" << std::endl;
	return ;
}

Brain	&Dog::getBrain(void) const {
	return (*_brain);
}
