/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:07:02 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:07:03 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

Zombie::Zombie() {
	setName("No name");
	std::cout	<< "Default Constructor called with name: ";
	std::cout	<< std::right << std::setfill(' ') << std::setw(27) 
				<< "\033[1;32m" << getName() << "\033[0m" << std::endl;
	return ;
}

Zombie::Zombie(std::string name) : _name(name) {
	std::cout	<< "Constructor called with name: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(35)
				<< name << "\033[0m" << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout	<< "\033[0mDestructor called for: \033[1;32m";
	std::cout	<< std::right << std::setfill(' ') << std::setw(42) 
				<< getName() << "\033[0m" << std::endl;
	return ;
}

std::string	Zombie::getName() const
{
	return (_name);
}

void Zombie::setName(std::string name)
{
	Zombie::_name = name;
	return ;
}

void Zombie::announce(void) {
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}