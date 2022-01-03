#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		
		void		setName(std::string name);
		std::string	getName() const;
		void		announce(void);
};
Zombie	*zombieHorde(int N, std::string name);

#endif