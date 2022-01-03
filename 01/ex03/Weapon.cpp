/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:09:28 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:09:29 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type) {
	_type = type;
	std::cout << "Weapon constructor called." << std::endl;
	return ;
}

Weapon::~Weapon(void) {
	std::cout << "Weapon destructor called." << std::endl;
	return ;
}

std::string const &Weapon::getType(void) const {
	return (_type);
}

void Weapon::setType(std::string type) {
	_type = type;
}
