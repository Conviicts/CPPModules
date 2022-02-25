#include "Iter.hpp"

int main( void ) {
	int			array1[4] = {1, 2, 3, 4};
	float   	array2[4] = {1.1, 2.2, 3.3, 4.4};
	char		array4[4] = {'q', 'w', 'e', 'r'};
	std::string	array3[4] = {"str1", "str2", "str3", "str4"};

	iter(array1, 4, print);
	std::cout << "----------------" << std::endl;
	iter(array2, 4, print);
	std::cout << "----------------" << std::endl;
	iter(array4, 4, print);
	std::cout << "----------------" << std::endl;
	iter(array3, 4, print);
	std::cout << "----------------" << std::endl;
}