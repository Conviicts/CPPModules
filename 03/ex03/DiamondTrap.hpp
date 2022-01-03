/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:22:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:22:08 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONTRAP_H__
#define __DIAMONTRAP_H__

#include <iostream>
#include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & ref);
		~DiamondTrap(void);
		
		DiamondTrap	&operator=(DiamondTrap const & ref);
		void		attack(std::string const & target);
		void		whoAmI(void) const;

};

#endif

