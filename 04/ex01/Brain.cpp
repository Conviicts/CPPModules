#include "Brain.hpp"

Brain::Brain(void) {
	std::string ideaStr;
	static const char chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";

	std::cout << "Brain constructor called" << std::endl;

	for (int i = 0; i < 100; i++) {
		for(unsigned int i = 0; i < 21; ++i) {
			ideaStr += chars[rand() % sizeof(chars) - 1];
		}
		_ideas[i] = ideaStr;
		ideaStr = "";
	}
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const & ref) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref.getIdea(i);
}


Brain	&Brain::operator=(Brain const & ref) {
	for (int i = 0; i < 100; i++)
		_ideas[i] = ref.getIdea(i);
	return (*this);
}

std::string Brain::getIdea(unsigned int index) const {
    return (_ideas[index]);
}

void	Brain::printIdeas(void) const {
	for (int i = 0; i < 100; i++) {
        std::cout << "idea " << i << " :" << _ideas[i] << std::endl ;
    }
    std::cout << std::endl;
}
