/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:21:05 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/27 15:59:34 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	_name = "ScavTrap";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	std::cout << "Default scavtrap constructor called with default name: " << _name << std::endl;
}

ScavTrap::ScavTrap(std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	std::cout << "Scavtrap constructor called with name: " << _name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & ref) {
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	std::cout << "Copy constructor ScavTrap called with name: " << _name << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const & ref) {
	std::cout << "Assignation operator ScavTrap called" << std::endl;
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << "Scavtrap " << _name << " Destructor called" << std::endl;
}

void		ScavTrap::attack(std::string const & target) {
	if (_energy_points <= 0) {
		std::cout << "ScavTrap: " << _name << " does not have enought energy point" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout	<< "ScavTrap " << _name 
				<< " attack "<< target
				<< ", causing " << _attack_damage
				<< " points of damage!" << std::endl;
}

void 		ScavTrap::guardGate(void) const {
	std::cout << "ScavTrap has switched to GuardGate mode !" << std::endl;
}
