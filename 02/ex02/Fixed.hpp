#ifndef __FIXED_H__
#define __FIXED_H__

#include <iostream>

class Fixed {
	private:
		int 				_n;
		static int const	_bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(int const n);
		Fixed(float const f);
		Fixed(Fixed const &);
		
		Fixed				&operator=(Fixed const & ref);

		bool				operator>(const Fixed & ref) const;
		bool				operator<(const Fixed & ref) const;
		bool				operator>=(const Fixed & ref) const;
		bool				operator<=(const Fixed & ref) const;
		bool				operator==(const Fixed & ref) const;
		bool				operator!=(const Fixed & ref) const;

		Fixed				operator+(const Fixed & ref) const;
		Fixed				operator-(const Fixed & ref) const;
		Fixed				operator*(const Fixed & ref) const;
		Fixed				operator/(const Fixed & ref) const;
		Fixed 				&operator++(void);
		Fixed 				&operator--(void);
		Fixed				operator++(int);
		Fixed				operator--(int);

		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
		static const Fixed	&min(const Fixed & a, const Fixed & b);
		static const Fixed	&max(const Fixed & a, const Fixed & b);
};

std::ostream &operator<<(std::ostream & o, Fixed const & ref);

#endif

