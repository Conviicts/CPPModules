#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS BRAIN";
	std::string *stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "str address: " << &str << std::endl;
	std::cout << "ptr address: " <<stringPTR << std::endl;
	std::cout << "ref address: " <<&stringREF << std::endl;

	std::cout << "ptr value: " <<*stringPTR << std::endl;
	std::cout << "ref value: " <<stringREF << std::endl;
	
}