/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:22:03 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:22:04 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
	std::cout << "Default DiamondTrap constructor called with default name: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name) {
	ClapTrap::_name = name + "_clap_name";
	_energy_points = 50;
	_hit_points = 100;
	_attack_damage = 30;

	std::cout << "DiamondTrap constructor called with name: " << _name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & ref) {
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	std::cout << "Copy constructor DiamondTrap called with name: " << _name << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const & ref) {
	std::cout << "Assignation operator DiamondTrap called" << std::endl;
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	return (*this);
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap: " << _name << " Destructor called" << std::endl;
}

void		DiamondTrap::attack(std::string const & target) {
	std::cout << "DiamondTrap: " << _name << " attack!" << std::endl;
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI(void) const {
	std::cout << "My name is " << _name << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}
