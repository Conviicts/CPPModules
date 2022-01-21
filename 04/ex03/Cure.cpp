#include "Cure.hpp"

Cure::Cure(void) {
	_type = "cure";
	return ;
}

Cure::Cure(Cure const &ref) {
	_type = ref._type;

	return ;
}

Cure::~Cure(void) {
	return ;
}

Cure	&Cure::operator=(Cure const &ref) {
	_type = ref._type;

	return (*this);
}

AMateria	*Cure::clone() const {
	AMateria	*neww = new Cure();

	return (neww);
}

void		Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
