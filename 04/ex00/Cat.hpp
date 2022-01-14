/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/04 07:50:29 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		~Cat(void);
		Cat(Cat const & ref);
		
		Cat	&operator=(Cat const & ref);
		void	makeSound(void) const;
};

#endif

