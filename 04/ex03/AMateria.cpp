/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 03:28:02 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/21 06:44:07 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("NONE") {
    return ;
}

AMateria::AMateria(std::string const & type) : _type(type) {
	return ;
}

AMateria & AMateria::operator=(AMateria const &src) {
	_type = src.getType();
	return (*this);
}

AMateria::~AMateria(void) {
	return ;
}

std::string const &	AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter& target) {
	(void)target;
	return ;
}