/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:20:07 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/20 03:13:56 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#define limit 4

int main()
{
	AAnimal	*animals[10];

	for (int i = 0; i < limit; i++) {
		if (i < (limit / 2)) {
			std::cout << "----------------------- Dog " << i + 1 << " ----------------------" << std::endl;
			animals[i] = new Dog();
			std::cout << "Type: " << animals[i]->getType() << std::endl;
			std::cout << "idea: " << static_cast<Dog *>(animals[i])->getBrain().getIdea(7) << std::endl;
			std::cout << "----------------------------------------------------" << std::endl;
		}
		else {
			std::cout << "----------------------- Cat " << i + 1 << " ----------------------" << std::endl;
			animals[i] = new Cat();
			std::cout << "Type: " << animals[i]->getType() << std::endl;
			std::cout << "idea: " << static_cast<Cat *>(animals[i])->getBrain().getIdea(1) << std::endl;
			std::cout << "----------------------------------------------------" << std::endl;
		}
	}
	for (int i = 0; i < limit; i++) {
		delete animals[i];
	}
}