/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:09:16 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/17 07:47:22 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) const {
	if (_weapon)
		std::cout << _name << " attack with his " << (*_weapon).getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
	return ;
}