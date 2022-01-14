/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/04 07:43:10 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"

class Dog : public Animal{
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & ref);
		
		Dog	&operator=(Dog const & ref);
		void	makeSound(void) const;
};

#endif

