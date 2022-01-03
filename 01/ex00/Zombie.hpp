#ifndef __ZOMBIE_HPP__
#define __ZOMBIE_HPP__

#include <string>

class Zombie {
	private:
		std::string	_name;
		void		setName(std::string name);
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		
		std::string	getName() const;
		void		announce(void);
};
Zombie	*newZombie(std::string);
void    randomChump(std::string name);

#endif