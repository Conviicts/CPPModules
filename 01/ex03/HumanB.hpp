/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:09:19 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:09:20 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
#define __HUMANB_HPP__

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

private:
	std::string _name;
	Weapon*		_weapon;

public:
	HumanB(std::string name);
	~HumanB(void);
	void    attack(void) const;
    void    setWeapon(Weapon& weapon);
};

#endif