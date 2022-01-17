/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:06:48 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:06:52 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iomanip>

void	classic() {
	std::cout	<< std::setfill('-') << std::setw(76)
				<< "\033[1;34m CLASSIC \033[0m----------------------------" << std::endl;
	Zombie	zombie;
	std::cout	<< "Zombie name: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(52) 
				<< zombie.getName() << "\033[0m" << std::endl;

	std::cout	<< "Zombie Announce: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(27);
	zombie.announce();
}

void	classic2() {
	std::cout	<< std::setfill('-') << std::setw(76)
				<< "\033[1;34m CLASSIC NAME \033[0m-------------------------" << std::endl;
	Zombie	zombie("MyZombie");
	std::cout	<< "Zombie name: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(52) 
				<< zombie.getName() << "\033[0m" << std::endl;

	std::cout	<< "Zombie Announce: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(27);
	zombie.announce();
}

void	newZombie() {
	std::cout	<< std::setfill('-') << std::setw(76)
				<< "\033[1;34m NEW ZOMBIE \033[0m--------------------------" << std::endl;
	Zombie	*nZombie;
	nZombie = newZombie("NewZombie1");
	std::cout	<< "NewZombie Announce: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(24);
	nZombie->announce();
	delete nZombie;
}

void	randomChump() {
	std::cout	<< std::setfill('-') << std::setw(76)
				<< "\033[1;34m RANDOM CHUMP \033[0m-------------------------" << std::endl;
	randomChump("randomChump");
}

int main() {
	
	classic();
	classic2();
	newZombie();
	randomChump();
	std::cout	<< std::setfill('-') << std::setw(65) << "" << std::endl;
	return (0);
}


//	std::cout << "-----------------------\033[1;34mNZ\033[0m----------------------" << std::endl;
//	

//	
//	std::cout << "-----------------------------------------------" << std::endl;
//	std::cout << std::endl << std::endl;
//	std::cout << "-----------------------\033[1;34mNZ\033[0m----------------------" << std::endl;
//	
//	std::cout << "-----------------------------------------------" << std::endl;
//	std::cout << std::endl << std::endl;
//	return (0);
//}