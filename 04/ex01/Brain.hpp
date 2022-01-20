/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:19:56 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/20 02:48:08 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Brain {
	private:
		std::string	_ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(Brain const & ref);
		
		Brain			&operator=(Brain const & ref);
		
		std::string		getIdea(unsigned int index) const;
		void			printIdeas(void) const;
};

#endif

