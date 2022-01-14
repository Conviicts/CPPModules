#include "Brain.hpp"

Brain::Brain(void) {
	srand(time(NULL));

	for (int i = 0; i < 100; i++)
		_ideas[i] = (rand() % 10) + 48;
}

Brain::~Brain(void) {
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
        std::cout << _ideas[i] << " " ;
    }
    std::cout << std::endl;
}
