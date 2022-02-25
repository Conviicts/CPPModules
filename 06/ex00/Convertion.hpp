#ifndef __CONVERTION_HPP__
#define __CONVERTION_HPP__
#include <string>
#include <iostream>
#include <iomanip>
#include <limits.h>

class Convertion {
	public:
		Convertion(void);
		Convertion(const Convertion &);
		virtual ~Convertion(void);

		Convertion & operator=(const Convertion &);

		std::string	findType(std::string str) const;
		void		print(char c) const;
		void		print(int i) const;
		void		print(float f) const;
		void		print(double d) const;
};

#endif