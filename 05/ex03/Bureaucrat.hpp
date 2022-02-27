#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	private:
		std::string const _name;
        int         _grade;

		Bureaucrat(void) {};
	public:
		Bureaucrat(std::string const name, int grade);
		~Bureaucrat(void);
		Bureaucrat(Bureaucrat const &);

		Bureaucrat	&operator=(Bureaucrat const &);

		int getGrade(void) const;
        std::string const getName(void) const;
		void increment(void);
		void decrement(void);

		void    signForm(Form &) const;
		void	executeForm(const Form &);

		class GradeTooLowException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The grade is too low !");
				}
		};
		class GradeTooHighException : public std::exception {
			public:
				virtual const char *what() const throw() {
					return ("The grade is too high !");
				}
		};
};

std::ostream	&operator<<(std::ostream &, const Bureaucrat &);

#endif

