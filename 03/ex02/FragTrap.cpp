/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:21:22 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/27 15:59:26 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	_name = "FragTrap";
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "Default FragTrap constructor called with default name: " << _name << std::endl;
}

FragTrap::FragTrap(std::string name) {
	_name = name;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	std::cout << "FragTrap constructor called with name: " << _name << std::endl;
}

FragTrap::FragTrap(FragTrap const & ref) {
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	std::cout << "Copy constructor FragTrap called with name: " << _name << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const & ref) {
	std::cout << "Assignation operator FragTrap called" << std::endl;
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap " << _name << " Destructor called" << std::endl;
}

void		FragTrap::attack(std::string const & target) {
	if (_energy_points <= 0) {
		std::cout << "FragTrap: " << _name << " does not have enought energy point" << std::endl;
		return ;
	}
	_energy_points--;
	std::cout	<< "FragTrap " << _name 
				<< " attack "<< target
				<< ", causing " << _attack_damage
				<< " points of damage!" << std::endl;
}

void 		FragTrap::highFivesGuys(void) const {
	std::cout << _name << " high fives!" << std::endl;
}
