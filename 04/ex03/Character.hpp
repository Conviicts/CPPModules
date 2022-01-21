#ifndef __ICHARACTER_HPP__
#define __ICHARACTER_HPP__
#include "AMateria.hpp"
#include <iostream>

class AMateria;

class ICharacter
{
	public:
		virtual ~ICharacter() {}
		virtual std::string const & getName() const = 0;
		virtual void equip(AMateria* m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter {
	private:
		std::string		_name;
		unsigned int	_index;
		AMateria *		_stock[4];
		Character(void);
	public:
		Character(std::string name);
		Character(Character const &ref);
		~Character(void);

		Character 			&operator=(Character const &ref);
		std::string const 	&getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
};

#endif