/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/28 14:10:55 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void) {
	Bureaucrat              michel("Michel", 20);
	Bureaucrat              kevin("kevin", 150);
	Bureaucrat              jean("jean", 80);

	ShrubberyCreationForm   a("target1");
	ShrubberyCreationForm   b("target4");
	RobotomyRequestForm     d("target2");
	PresidentialPardonForm  e("target3");

	std::cout << std::endl << "-------------- FORM ---------------" << std::endl;
	std::cout << "ShrubberyCreationForm a -> " << a << std::endl;
	std::cout << "ShrubberyCreationForm b -> " << b << std::endl;
	std::cout << "RobotomyRequestForm d -> " << d << std::endl;
	std::cout << "PresidentialPardonForm -> " << e << std::endl;

	/* Execute the action of form class. */
	try {
		std::cout << std::endl << "---------- MICHEL SIGN FORM ----------" << std::endl;
		michel.signForm(e);
		michel.signForm(d);
		michel.signForm(a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- JEAN SIGN FORM ----------" << std::endl;
		jean.signForm(e);
		jean.signForm(d);
		jean.signForm(a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- KEVIN SIGN FORM ----------" << std::endl;
		kevin.signForm(e);
		kevin.signForm(d);
		kevin.signForm(a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "--------- MICHEL EXECUTE FORM --------" << std::endl;
		michel.executeForm(e);
		michel.executeForm(d);
		michel.executeForm(a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "-------- JEAN EXECUTE FORM --------" << std::endl;
		jean.executeForm(e);
		jean.executeForm(d);
		jean.executeForm(a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "-------- KEVIN EXECUTE FORM --------" << std::endl;
		kevin.executeForm(e);
		kevin.executeForm(d);
		kevin.executeForm(a);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}