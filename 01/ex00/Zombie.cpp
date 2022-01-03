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
#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name) {
	std::cout << "Constructor called with name: " << name << std::endl;
	return ;
}

Zombie::~Zombie(void) {
	std::cout << getName() << " Destructor called" << std::endl;
	return ;
}

std::string	Zombie::getName() const
{
	return (_name);
}

void Zombie::setName(std::string name)
{
	Zombie::_name = name;
}

void Zombie::announce(void) {
	std::cout << getName() << " BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}