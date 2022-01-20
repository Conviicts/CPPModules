/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/20 02:20:58 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	private:
		Brain *_brain;
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & ref);
		
		Cat	&operator=(Cat const & ref);
		void	makeSound(void) const;
		Brain	&getBrain(void) const;
};

#endif

