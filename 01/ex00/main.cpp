#include "Zombie.hpp"
#include <iostream>
int main() {
	Zombie nz;
	Zombie nz1("Michel");

	std::cout << "--------------------CLASSIC---------------------" << std::endl;
	std::cout << nz.getName() << std::endl;
	nz.announce();
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << nz1.getName() << std::endl;
	nz1.announce();
	std::cout << std::endl << std::endl;


	std::cout << "-----------------------NZ----------------------" << std::endl;
	Zombie	*nZombie;

	nZombie = newZombie("NewZombie1");
	nZombie->announce();
	delete nZombie;
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl << std::endl;
	std::cout << "-----------------------NZ----------------------" << std::endl;
	randomChump("rChump");
	std::cout << "-----------------------------------------------" << std::endl;
	std::cout << std::endl << std::endl;
	return (0);
}