/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/27 14:56:24 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

int main(void) {
	ClapTrap player("Convicts");
	ClapTrap enemy("Enemy");
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;

	std::cout << player.getName() << " health: " << player.getHitPoints() << std::endl;
	std::cout << enemy.getName() << " health: " << enemy.getHitPoints() << std::endl;
	
	
	std::cout << enemy.getName() << " energy: " << enemy.getEnergyPoints() << std::endl;
	std::cout << enemy.getName() << " energy: " << enemy.getEnergyPoints() << std::endl;

	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
	
	player.attack("Enemy");
	enemy.takeDamage(player.getAttackDamage());

	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;

	enemy.takeDamage(500);

	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;

	enemy.beRepaired(50);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);
	player.beRepaired(20);

	std::cout << player.getName() << " energy: " << player.getEnergyPoints() << std::endl;
	std::cout << enemy.getName() << " energy: " << enemy.getEnergyPoints() << std::endl;
	
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
}