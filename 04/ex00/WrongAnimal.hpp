/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/04 07:54:47 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONG_ANIMAL_HPP__
#define __WRONG_ANIMAL_HPP__

#include <iostream>
#include <string>

class WrongAnimal {
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		~WrongAnimal(void);
		WrongAnimal(WrongAnimal const & ref);
		
		WrongAnimal		&operator=(WrongAnimal const & ref);
		void			makeSound(void) const;
		std::string		getType(void) const;
};

#endif

