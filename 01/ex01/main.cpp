/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:07:18 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:07:19 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <iomanip>
#include <cstdlib>

int main(int ac, char **av) {
	Zombie	*horde;
	int		N;
	
	if (ac != 2)
		return (0);
	N = std::atoi(av[1]);
	if ( N <= 0)
		return (1);
	std::cout	<< std::setfill('-') << std::setw(61)
				<< "\033[1;34m CONSTRUCTORS \033[0m------------------" << std::endl;
	horde = zombieHorde(N, "Zombie");
	std::cout	<< std::setfill('-') << std::setw(61)
				<< "\033[1;34m ANNOUNCES \033[0m-------------------" << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	std::cout	<< std::setfill('-') << std::setw(61)
				<< "\033[1;34m DESTRUCTORS \033[0m------------------" << std::endl;
	delete [] horde;
	std::cout	<< std::setfill('-') << std::setw(50) << "" << std::endl;
	return (0);
}