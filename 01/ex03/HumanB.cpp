/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:09:16 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:09:17 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
	return ;
}

HumanB::~HumanB(void) {
	return ;
}

void	HumanB::attack(void) const {
	std::cout << _name << " attack with his " << (*_weapon).getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
	return ;
}