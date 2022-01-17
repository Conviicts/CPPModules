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
#include <cstdlib>

int main(int ac, char **av) {
	Zombie	*horde;
	int		N;
	
	if (ac != 2)
		return (0);
	N = std::atoi(av[1]);
	if ( N <= 0)
		return (1);
	horde = zombieHorde(N, "Michel");
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}