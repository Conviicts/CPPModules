/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:21:54 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:21:55 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Claptrap"), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
	std::cout << _name << " Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & ref) {
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	std::cout << "Copy constructor called with name: " << _name << std::endl;
}


ClapTrap	&ClapTrap::operator=(ClapTrap const & ref) {
	std::cout << "Assignation operator called" << std::endl;
	_hit_points = ref._hit_points;
	_energy_points = ref._energy_points;
	_attack_damage = ref._attack_damage;

	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Claptrap: " << _name << " Destructor called" << std::endl;
}

void		ClapTrap::attack(std::string const & target) {
	std::cout	<< "ClapTrap " << _name 
				<< " attack "<< target
				<< ", causing " << _attack_damage
				<< " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage(unsigned int amount) {
	(void)amount;
	if (amount >= _hit_points) {
		_hit_points = 0;
		std::cout << "ClapTrap: " << _name << " is dead" << std::endl;
		return ;
	}
	_hit_points -= amount;
	std::cout << "ClapTrap: " << _name << " take damage  causing " << amount << " points of damage." << std::endl;
	std::cout << "ClapTrap: " << _name << " have " << _hit_points << " points of life !" << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount) {
	if (amount <= 0)
		return ;
	_hit_points += amount;
	std::cout  << amount << " hp have been added to " << _name << std::endl;
	std::cout << "ClapTrap: " << _name << " have now " << _hit_points << " points of life !" << std::endl;
}

std::string	ClapTrap::getName(void) {
	return (_name);
}

unsigned int	ClapTrap::getHitPoints(void) {
	return (_hit_points);
}

unsigned int	ClapTrap::getEnergyPoints(void) {
	return (_energy_points);
}

unsigned int	ClapTrap::getAttackDamage(void) {
	return (_attack_damage);
}
