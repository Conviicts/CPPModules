/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:09:44 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:09:45 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	return ;
}

Karen::~Karen() {
	return ;
}

void	Karen::complain(std::string level) {
	void (Karen::*f[4])(void) = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};

	for (int i = 0; i < 4; i++)
	{
		if (_levels[i] == level)
			(this->*f[i])();
	}
	
}

void	Karen::_debug() {
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info() {
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning() {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error() {
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}