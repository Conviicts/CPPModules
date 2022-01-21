#ifndef __MATERIASOURCE_HPP__
#define __MATERIASOURCE_HPP__
#include <iostream>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria*) = 0;
		virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource {
	private:
        AMateria *	_stock[4];
	public:
		MateriaSource(void);
		virtual ~MateriaSource(void);
		MateriaSource(MateriaSource const & ref);
		
		MateriaSource	&operator=(MateriaSource const & ref);
		void			learnMateria(AMateria *materia);
        AMateria *		createMateria(std::string const & type);
};

#endif

