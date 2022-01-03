/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:22:21 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:22:22 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap sc("Player1");

	sc.highFivesGuys();
	sc.attack("Player2");
	sc.beRepaired(10);
	sc.whoAmI();
}