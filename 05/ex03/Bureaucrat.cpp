
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const name, int grade) : _name(name), _grade(grade) {
	if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException();
    return;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref) : _name(ref._name), _grade(ref._grade) {
	if (this->_grade < 1)
        throw GradeTooHighException();
    else if (this->_grade > 150)
        throw GradeTooLowException();
    return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & ref) {
    this->_grade = ref._grade;
    return (*this);
}

std::string const Bureaucrat::getName(void) const {
    return (_name);
}

int Bureaucrat::getGrade(void) const {
    return (_grade);
}

void Bureaucrat::increment(void) {
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade--;
}

void Bureaucrat::decrement(void) {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade++;
}

void    Bureaucrat::signForm(Form & src) const {
    if (src.getSigned())
        std::cout << _name << " cannot sign because " << src.getName() << " already signed." << std::endl;
    else
        std::cout << _name << " signs " << src.getName() << "." << std::endl;
    src.beSigned(*this);

    return ;
}

void	Bureaucrat::executeForm(const Form &ref) {
	ref.execute(*this);
	std::cout << getName() << " execute " << ref.getName() << "." << std::endl;
	return ;
}

std::ostream &  operator<<(std::ostream & o, const Bureaucrat & src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
    return o;
}
