#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	for (unsigned int i = 0; i < 4; i++)
		_stock[i] = NULL;
	return ;
}

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		if (_stock[i] != NULL)
			delete _stock[i];
}

MateriaSource::MateriaSource(MateriaSource const & ref) {
	for (unsigned int i = 0; i < 4; i++) {
		if (ref._stock[i] != NULL)
			_stock[i] = ref._stock[i]->clone();
		else
			_stock[i] = NULL;
	}
	return ;
}


MateriaSource	&MateriaSource::operator=(MateriaSource const & ref) {
	for (unsigned int i = 0; i < 4; i++) {
		if (ref._stock[i] != NULL)
			_stock[i] = ref._stock[i]->clone();
		else if (_stock[i]) {
			delete _stock[i];
			_stock[i] = NULL;
		}
	}
	return (*this);
}

void			MateriaSource::learnMateria(AMateria *materia) {
	if (!materia)
		return ;
	else {
		for (unsigned int i = 0; i < 4; i++) {
			if (_stock[i] == NULL) {
				_stock[i] = materia;
				break;
			}
		}
	}
	return ;
}

AMateria *		MateriaSource::createMateria(std::string const & type) {
	if (type != "cure" && type != "ice")
		return NULL;
	for (unsigned int i = 0; i < 4; i++) {
		if (_stock[i] != NULL && !_stock[i]->getType().compare(type)) {
			return (_stock[i]->clone());
		}
	}
	return NULL;
}
