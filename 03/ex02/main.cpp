/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:21:32 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:21:33 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int main(void) {
	FragTrap sc("Player 1");

	sc.highFivesGuys();
	sc.attack("Player 2");
	sc.beRepaired(10);
}