#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
	setName("No name");
	std::cout << "Default Constructor called: " << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Constructor called with name: " << name << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << getName() << " Destructor called" << std::endl;
	return ;
}

std::string	Zombie::getName() const
{
	return (_name);
}

void Zombie::setName(std::string name)
{
	Zombie::_name = name;
}

void Zombie::announce(void) {
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}