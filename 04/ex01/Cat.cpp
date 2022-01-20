#include "Cat.hpp"

Cat::Cat() {
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Cat constructor called." << std::endl;
	//_brain->printIdeas();
}

Cat::~Cat(void) {
	delete _brain;
	std::cout << "Cat destructor called." << std::endl;
}

Cat::Cat(Cat const & ref) {
	std::cout << "Cat assignation constructor called." << std::endl;
	_type = ref._type;
	_brain = new Brain(*ref._brain);
	//_brain->printIdeas();
}


Cat	&Cat::operator=(Cat const & ref) {
	std::cout << "Cat copy constructor called." << std::endl;
	_type = ref._type;
	_brain = new Brain(*ref._brain);
	//_brain->printIdeas();

	return (*this);
}

void	Cat::makeSound(void) const {
	std::cout << "Miaou" << std::endl;
	return ;
}

Brain	&Cat::getBrain(void) const {
	return (*_brain);
}
