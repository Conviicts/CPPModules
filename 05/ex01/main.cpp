/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/26 04:22:28 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int random(int min, int max)
{
	
	int range = max - min + 1;
	int num = rand() % range + min;
	return (num);
}

int main(void) {
	Bureaucrat reda("Reda", 120);
	Bureaucrat yohann("Yohann", 1);
	Form	*forms[4];

	srand(time(NULL));
	for (size_t i = 0; i < 4; i++)
		forms[i] = NULL;
	try {
		for (size_t i = 0; i < 4; i++) {
			std::string name = "form ";
			name += (i + 48);
			forms[i] = new Form(name, random(1, 150), random(1, 150));
			std::cout << *forms[i] << std::endl;
		}
		
	}
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
	try {
		yohann.signForm(*forms[0]);
		reda.signForm(*forms[1]);
		yohann.signForm(*forms[2]);
		reda.signForm(*forms[3]);
	}
    catch(const std::exception & e) {
        std::cerr << e.what() << '\n';
    }
	for (size_t i = 0; i < 4; i++) {
		if (forms[i] != NULL) {
			std::cout << *forms[i] << std::endl;
			delete forms[i];
		}
	}
	
}