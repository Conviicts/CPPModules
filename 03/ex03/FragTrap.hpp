/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:22:16 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:22:17 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_H__
#define __FRAGTRAP_H__

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & ref);
		~FragTrap(void);
		
		FragTrap	&operator=(FragTrap const & ref);
		void		attack(std::string const & target);
		void		highFivesGuys(void) const;

};

std::ostream &operator<<(std::ostream & o, ClapTrap const & ref);

#endif

