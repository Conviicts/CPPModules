#include "Character.hpp"

Character::Character(void) : _name("No name"), _index(0) {
	for (unsigned int i = 0; i < 4; i++)
		_stock[i] = NULL;

	return ;
}

Character::Character(std::string name) : _name(name), _index(0) {
	for (unsigned int i = 0; i < 4; i++)
		_stock[i] = NULL;
	return ;
}

Character::Character(Character const & src) : _index(0) {
	_name = src.getName();
	for (unsigned int i = 0; i < 4; i++) {
		if (i < src._index)
			equip(src._stock[i]->clone());
		else
			_stock[i] = NULL;
	}
	return ;
}

Character &	Character::operator=(Character const & src) {
	_name = src.getName();
	for (unsigned int i = 0; i < 4; i++) {
		if (i <= src._index)
			equip(src._stock[i]->clone());
		else if (_stock[i]) {
			delete _stock[i];
			_stock[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character(void) {
	for (unsigned int i = 0; i < _index; i++) {
		if (_stock[i] != NULL)
			delete _stock[i];
	}

	return ;
}

std::string const & Character::getName(void) const {
	return (_name);
}

void	Character::equip(AMateria *m) {
	if (m == NULL || _index > 3)
		return ;
	_stock[_index] = m;
	_index += 1;

	return ;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3 || _stock[idx] == NULL)
		return ;

	for (int i = 0; i < 4; i++) {
		if (i > idx && i > 0)
			_stock[i - 1] = _stock[i];
		else if (i == idx)
			_stock[i] = NULL;
	}
	_index -= 1;
	return ;
}

void	Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx > 3 || _stock[idx] == NULL)
		return ;
	_stock[idx]->use(target);
	
	return ;
}