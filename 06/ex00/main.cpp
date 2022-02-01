#include <iostream>
#include "convertion.hpp"
#include <cstdlib>

int main(int ac, char **av) {
	if (ac != 2) {
		std::cout << "Error: enter one argument." << std::endl;
		return (1);
	}
	if (av[1][0] == '\0') {
		std::cout << "Error: invalid argument." << std::endl;
		return (2);
	}

	Convertion convert;
	std::string str = static_cast<std::string>(av[1]);
	std::string type = convert.findType(str); 

	if (type == "int") {
		int i = std::atoi(str.c_str());
		convert.print(i);
	}
	else if (type == "float") {
		float f = std::atof(str.c_str());
		convert.print(f);
	}
	else if (type == "double") {
		double d = static_cast<double>(std::atof(str.c_str()));
		convert.print(d);
	}
	else if (type == "char") {
		char c = str.at(0);
		convert.print(c);
	}
	else if (type == "invalid") {
		std::cout << "Invalid character input" << std::endl;
	}
	return (0);
}