/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/20 03:11:27 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAP__
#define __ANIMAP__

#include <iostream>
#include <string>

class AAnimal {
	protected:
		std::string	_type;
	public:
		AAnimal(void);
		virtual ~AAnimal(void);
		AAnimal(AAnimal const & ref);
		
		AAnimal			&operator=(AAnimal const & ref);
		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
};

#endif

