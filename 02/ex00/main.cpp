/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:11:22 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/21 01:29:39 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;
	std::cout << a.getRawBits() << std::endl;
	a.setRawBits(3);
	std::cout << a.getRawBits() << std::endl;

	std::cout << b.getRawBits() << std::endl;
	b.setRawBits(8);
	std::cout << b.getRawBits() << std::endl;
	
	std::cout << c.getRawBits() << std::endl;
	return 0;
}