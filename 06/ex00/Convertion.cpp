#include "Convertion.hpp"

Convertion::Convertion() {
	return ;
}

Convertion::Convertion(const Convertion & src) {
	*this = src;
	return ;
}

Convertion::~Convertion() {
	return ;
}

Convertion &    Convertion::operator=(const Convertion & src) {
	(void)src;
	return (*this);
}

std::string	Convertion::findType(std::string str) const {
	if (str == "+inf" || str == "-inf" || str == "nan")
		return ("double");
	else if (str.length() > 3 && str.at(str.length() - 1) == 'f')
		return("float");
	else if (str.length() > 2 && str.find('.') != std::string::npos)
		return ("double");
	else if (str.length() == 1)
	{
		char c = str.at(0);
		if (c >= '0' && c <= '9')
			return ("int");
		else if (c >= 32 && c <= 126)
			return ("char");
		else
			return ("invalid");
	}
	else
		return ("int");
}

void		Convertion::print(char c) const {
	std::cout << "char: '" << c << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void		Convertion::print(int i) const {
	if (i > 256 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void		Convertion::print(float f) const {
	if (f > 256 || f < 0 || f != f)
		std::cout << "char: impossible" << std::endl;
	else if (f > 126 || f < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;

	if (f > static_cast<float>(INT_MAX) || f < static_cast<float>(INT_MIN) || f != f)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	
	std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(f) << std::endl;
}

void		Convertion::print(double d) const {
	if (d > 256 || d < 0 || d != d)
		std::cout << "char: impossible" << std::endl;
	else if (d > 126 || d < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;

	if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN) || d != d)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	
	if (d > static_cast<double>(__FLT_MAX__) || d < static_cast<double>(__FLT_MIN__))
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;

	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}
