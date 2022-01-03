/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:20:17 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "ClapTrap.hpp"

int main(void) {
	ClapTrap player1("Convicts");
	ClapTrap player2("Enemy");
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;

	std::cout << player1.getName() << " health: " << player1.getHitPoints() << std::endl;
	std::cout << player2.getName() << " health: " << player2.getHitPoints() << std::endl;

	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
	
	player1.attack("Enemy");
	player2.takeDamage(player1.getAttackDamage());

	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;

	player2.beRepaired(50);
	player1.beRepaired(20);
	
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
}