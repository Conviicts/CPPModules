#ifndef __AMATERIA_HPP__
#define __AMATERIA_HPP__
#include "Character.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
	protected:
		AMateria(void);
		std::string	_type;
	public:
		AMateria(std::string const &type);
		AMateria(AMateria const &ref);
        AMateria & operator=(AMateria const &ref);

		virtual ~AMateria(void);

		std::string const &	getType() const;
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif