#include "Ice.hpp"

Ice::Ice(void) {
	_type = "ice";
	return ;
}

Ice::Ice(Ice const &ref) {
	_type = ref._type;

	return ;
}

Ice::~Ice(void) {
	return ;
}

Ice			&Ice::operator=(Ice const &ref) {
	_type = ref._type;

	return (*this);
}

AMateria	*Ice::clone() const {
	AMateria	*neww = new Ice();

	return (neww);
}

void		Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
