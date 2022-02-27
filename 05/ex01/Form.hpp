#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string const	_name;
        bool        		_signed;
		int const			_gradeToSign;
		int	const			_gradeToExecute;

		Form(void);

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
	public:
		Form(std::string name, int gradeTosign, int gradeToExecute);
		~Form(void);
		Form(Form const &);

		Form	&operator=(Form const &);

		std::string	const 	getName() const;		
		bool				getSigned() const;	
		int					getGradeToSign() const;
		int					getGradeToExecute() const;
		void				beSigned(const Bureaucrat &);
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif

