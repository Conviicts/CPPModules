/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/20 03:12:02 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG__
#define __DOG__

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain *_brain;
	public:
		Dog(void);
		~Dog(void);
		Dog(Dog const & ref);
		
		Dog		&operator=(Dog const & ref);
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
};

#endif

