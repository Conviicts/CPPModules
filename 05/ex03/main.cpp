/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/28 14:39:17 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main(void) {
	
	Bureaucrat	michel("michel", 3);
	Bureaucrat	kevin("kevin", 140);
	Bureaucrat	jean("jean", 35);
	Intern      intern;

	Form	*a = intern.makeForm("presidential pardon", "target");
	Form	*b = intern.makeForm("robotomy request", "target");
	Form	*c = intern.makeForm("shrubbery creation", "target");
	
	try {
		michel.signForm(*a);
		michel.executeForm(*a);

		michel.signForm(*b);
		michel.executeForm(*b);

		michel.signForm(*c);
		michel.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "---------- MICHEL SIGN FORM ----------" << std::endl;
		michel.signForm(*a);
		michel.signForm(*b);
		michel.signForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- JEAN SIGN FORM ----------" << std::endl;
		jean.signForm(*a);
		jean.signForm(*b);
		jean.signForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "--------- KEVIN SIGN FORM ----------" << std::endl;
		kevin.signForm(*a);
		kevin.signForm(*b);
		kevin.signForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "--------- MICHEL EXECUTE FORM --------" << std::endl;
		michel.executeForm(*a);
		michel.executeForm(*b);
		michel.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {		
		std::cout << std::endl << "-------- JEAN EXECUTE FORM --------" << std::endl;
		jean.executeForm(*a);
		jean.executeForm(*b);
		jean.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << std::endl << "-------- KEVIN EXECUTE FORM --------" << std::endl;
		kevin.executeForm(*a);
		kevin.executeForm(*b);
		kevin.executeForm(*c);
	}
	catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

    return (0);
}