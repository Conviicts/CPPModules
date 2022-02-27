#ifndef __FORM_HPP__
#define __FORM_HPP__

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
		std::string	_name;
		std::string	_target;
        bool        _signed;
		int			_gradeToSign;
		int			_gradeToExecute;

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
		class FormNotSigned : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("The form is not signed !");
			}
		};
	public:
		Form(std::string name, std::string target, int gradeTosign, int gradeToExecute);
		virtual ~Form(void);
		Form(Form const &);

		Form	&operator=(Form const &);

		std::string	getName() const;		
		bool		getSigned() const;	
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		void		beSigned(const Bureaucrat &);
		std::string	getTarget(void) const ;

		virtual void 	execute(Bureaucrat const &executor) const = 0;
};

std::ostream	&operator<<(std::ostream &, const Form &);

#endif

