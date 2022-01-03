#include "Fixed.hpp"

Fixed::Fixed(void) : _n(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & ref) {
	std::cout << "Copy constructor called" << std::endl;
	_n = ref._n;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(Fixed const & ref) {
	std::cout << "Assignation operator called" << std::endl;
	_n = ref.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_n); 
}

void	Fixed::setRawBits(int const raw) {
	_n = raw;
	return ; 
}

std::ostream &operator<<(std::ostream & o, Fixed const & ref) {
	o << ref.getRawBits();
	return (o);
}