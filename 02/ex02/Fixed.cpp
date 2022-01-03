/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jode-vri <jode-vri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 09:11:52 by jode-vri          #+#    #+#             */
/*   Updated: 2022/01/03 09:11:53 by jode-vri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void) : _n(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const n) : _n(n << _bits) {
	//std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const f) : _n((int)roundf(f * (1 << _bits))) {
	//std::cout << "Float constructor called" << std::endl;
}

int		Fixed::toInt(void) const {
	return (_n >> _bits);
}

float	Fixed::toFloat(void) const {
	return (_n / float(1 << _bits));
}

const Fixed 	&Fixed::min(const Fixed & a, const Fixed & b) {
	return (a > b ? b : a);
}

const Fixed 	&Fixed::max(const Fixed & a, const Fixed & b) {
	return (a > b ? a : b);
}

Fixed::Fixed(Fixed const & ref) {
	//std::cout << "Copy constructor called" << std::endl;
	_n = ref.getRawBits();
}

Fixed::~Fixed(void) {
	//std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & ref) {
	//std::cout << "Assignation operator called" << std::endl;
	_n = ref.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (_n); 
}

void	Fixed::setRawBits(int const raw) {
	_n = raw;
	return ; 
}

bool	Fixed::operator>(const Fixed & ref) const {
	return (_n > ref._n);
}

bool	Fixed::operator<(const Fixed & ref) const {
	return (_n < ref._n);
}

bool	Fixed::operator>=(const Fixed & ref) const {
	return (_n >= ref._n);
}

bool	Fixed::operator<=(const Fixed & ref) const {
	return (_n <= ref._n);
}

bool	Fixed::operator==(const Fixed & ref) const {
	return (_n == ref._n);
}

bool	Fixed::operator!=(const Fixed & ref) const {
	return (_n != ref._n);
}

Fixed	Fixed::operator+(const Fixed & ref) const {
	return (Fixed(toFloat() + ref.toFloat()));
}

Fixed	Fixed::operator-(const Fixed & ref) const {
	return (Fixed(toFloat() - ref.toFloat()));
}

Fixed	Fixed::operator*(const Fixed & ref) const {
	return (Fixed(toFloat() * ref.toFloat()));
}

Fixed	Fixed::operator/(const Fixed & ref) const {
	return (Fixed(toFloat() / ref.toFloat()));
}

Fixed &	Fixed::operator--(void) {
	_n--;
	return (*this);
}

Fixed &	Fixed::operator++(void) {
	_n++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp = *this;

	--(*this);
	return (tmp);
}

Fixed	Fixed::operator++(int) {
	Fixed	tmp = *this;

	++(*this);
	return (tmp);
}


std::ostream &operator<<(std::ostream & o, Fixed const & ref) {
	o << ref.toFloat();
	return (o);
}