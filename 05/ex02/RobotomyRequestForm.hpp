#ifndef __ROBOTOMY_REQUEST_FORM_HPP__
#define __ROBOTOMY_REQUEST_FORM_HPP__

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form {

	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &);
		~RobotomyRequestForm(void);

		RobotomyRequestForm & operator=(const RobotomyRequestForm &);
		void    execute(const Bureaucrat & executor) const;

};

#endif