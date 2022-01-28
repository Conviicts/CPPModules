#ifndef __PRESIDENTIAL_PARDON_FORM_HPP__
#define __PRESIDENTIAL_PARDON_FORM_HPP__

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class PresidentialPardonForm : public Form {

	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &);
		~PresidentialPardonForm(void);

		PresidentialPardonForm & operator=(const PresidentialPardonForm &);
		void    execute(const Bureaucrat & executor) const;

};

#endif