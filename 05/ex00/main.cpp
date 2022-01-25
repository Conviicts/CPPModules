/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/25 09:55:33 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat b("Yohann", 1);
	try {
		std::cout << b << std::endl;
		std::cout << "grade: " << b.getGrade() << std::endl;
		b.decrement();
		std::cout << "grade: " << b.getGrade() << std::endl;
		b.increment();
		std::cout << "grade: " << b.getGrade() << std::endl;
		b.increment();
		std::cout << "grade: " << b.getGrade() << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Bureaucrat b1("Michel", 150);
		std::cout << b1 << std::endl;
		std::cout << "grade: " << b1.getGrade() << std::endl;
		b1.increment();
		std::cout << "grade: " << b1.getGrade() << std::endl;
		b1.decrement();
		std::cout << "grade: " << b1.getGrade() << std::endl;
		b1.decrement();
		std::cout << "grade: " << b1.getGrade() << std::endl;
		b1.decrement();
		std::cout << "grade: " << b1.getGrade() << std::endl;
		b1.decrement();
		
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
}