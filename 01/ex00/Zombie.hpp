/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:07:08 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:07:09 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>

class Zombie {
	private:
		std::string	_name;
		void		setName(std::string name);
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		
		std::string	getName() const;
		void		announce(void);
};
Zombie	*newZombie(std::string);
void    randomChump(std::string name);

#endif