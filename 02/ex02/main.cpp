/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:11:58 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/20 01:45:12 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed b(10);
	Fixed const c(42.42f);

	a = Fixed(4242.2424f);

	std::cout << "a float: " << a.toFloat() << " int: " << a.toInt() << std::endl;
	std::cout << "b float: " << b.toFloat() << " int: " << b.toInt() << std::endl;
	std::cout << "c float: " << c.toFloat() << " int: " << c.toInt() << std::endl;
	
	std::cout << "--------------------------------------" << std::endl;
	a = b + c;
	std::cout << "a = b + c" << std::endl;
	std::cout << "float: " << a.toFloat() << " int: " << a.toInt() << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	a = b - c;
	std::cout << "a = b - c" << std::endl;
	std::cout << "float: " << a.toFloat() << " int: " << a.toInt() << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	a = b * c;
	std::cout << "a = b * c" << std::endl;
	std::cout << "float: " << a.toFloat() << " int: " << a.toInt() << std::endl;
	
	std::cout << "--------------------------------------" << std::endl;
	a = b / c;
	std::cout << "a = b / c" << std::endl;
	std::cout << "float: " << a.toFloat() << " int: " << a.toInt() << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	a = 0;
	std::cout << "a++:" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	a = 0;
	std::cout << "++a:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	a = 0;
	std::cout << "a--:" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << "--------------------------------------" << std::endl;

	std::cout << "--------------------------------------" << std::endl;
	a = 0;
	std::cout << "--a:" << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	
	std::cout << "--------------------------------------" << std::endl;
	a = 10, b = 15;
	std::cout << "min:" << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << "max:" << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	return 0;
}