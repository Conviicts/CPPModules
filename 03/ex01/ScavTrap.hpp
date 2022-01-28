#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & ref);
		~ScavTrap(void);
		
		ScavTrap	&operator=(ScavTrap const & ref);
		void		attack(std::string const & target);
		void 		guardGate(void) const;

};

std::ostream &operator<<(std::ostream & o, ClapTrap const & ref);

#endif

