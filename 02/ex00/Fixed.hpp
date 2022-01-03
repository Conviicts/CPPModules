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

