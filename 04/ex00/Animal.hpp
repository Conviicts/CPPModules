/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/04 07:46:34 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAP__
#define __ANIMAP__

#include <iostream>
#include <string>

class Animal {
	protected:
		std::string	_type;
	public:
		Animal(void);
		~Animal(void);
		Animal(Animal const & ref);
		
		Animal			&operator=(Animal const & ref);
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
};

#endif

