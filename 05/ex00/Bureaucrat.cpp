
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    _grade = grade;
    return;
}

Bureaucrat::~Bureaucrat(void) {
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref) {
	_name = ref.getName();
    _grade = ref.getGrade();
    return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & ref) {
	_name = ref.getName();
    _grade = ref.getGrade();
    return (*this);
}

std::string Bureaucrat::getName(void) const {
    return (_name);
}

int Bureaucrat::getGrade(void) const {
    return (_grade);
}

void Bureaucrat::increment(void) {
	if (_grade - 1 < 1)
		throw GradeTooHighException();
	_grade -= 1;
}

void Bureaucrat::decrement(void) {
	if (_grade + 1 > 150)
		throw GradeTooLowException();
	_grade += 1;
}

std::ostream &  operator<<(std::ostream & o, const Bureaucrat & src) {
    o << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
    return o;
}
