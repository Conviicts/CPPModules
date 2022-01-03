/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:22:35 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:22:36 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_H__
#define __SCAVTRAP_H__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
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

