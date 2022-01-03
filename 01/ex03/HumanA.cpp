#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

}
HumanA::~HumanA(void) {
	
}
void HumanA::attack() {
	std::cout << _name << " attack with his " << _weapon.getType() << std::endl;
	return ;	
}