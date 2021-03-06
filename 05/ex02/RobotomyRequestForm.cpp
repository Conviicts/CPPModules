#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, "RobotomyRequestForm", 72, 45) {
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : Form(src) {
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return ;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src) {
	Form::operator=(src);

	return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat & executor) const {
	Form::execute(executor);

	std::cout << "drill noise..." << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << getTarget() << " has been robotomized" << std::endl;
	else
		std::cout << getTarget() << " has not been robotomized." << std::endl;

	return ;
}