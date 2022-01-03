/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:11:19 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:11:20 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
	private:
		int 				_n;
		static int const	_bits = 8;
	public:
		Fixed(void);
		~Fixed();
		Fixed(Fixed const & ref);
		Fixed	&operator=(Fixed const & ref);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream & o, Fixed const & ref);

#endif

