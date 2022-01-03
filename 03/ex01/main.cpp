#include <iostream>
#include <iomanip>
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap player1("Convicts");
	ScavTrap player2("Enemy");
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
	
	player2.guardGate();
	player1.guardGate();
	
	std::cout << std::setfill('-') << std::setw(80) << "-" << std::endl;
}