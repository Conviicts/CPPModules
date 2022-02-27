
#include "Form.hpp"

Form::Form(std::string const name, std::string target, int gradeTosign, int gradeToExecute) 
	: _name(name), _target(target) ,_signed(false), _gradeToSign(gradeTosign), _gradeToExecute(gradeToExecute) {
    if (this->_gradeToSign < 1)
        throw GradeTooHighException();
    if (this->_gradeToSign > 150)
        throw GradeTooLowException();
    if (this->_gradeToExecute < 1)
        throw GradeTooHighException();
    if (this->_gradeToExecute > 150)
        throw GradeTooLowException();
    return ;
}

Form::~Form(void) {
    return ;
}

Form::Form(Form const &ref)
	: _name(ref._name), _signed(false), _gradeToSign(ref._gradeToSign), _gradeToExecute(ref._gradeToExecute) {
	
}


Form	&Form::operator=(Form const &ref) {
    this->_signed = ref._signed;
	return (*this);
}

std::string	const Form::getName() const {
    return (_name);
}

bool        Form::getSigned() const {
    return (_signed);
}

int			Form::getGradeToSign() const {
    return (_gradeToSign);
}

int			Form::getGradeToExecute() const {
    return (_gradeToExecute);
}

std::string     Form::getTarget(void) const {
	return (_target);
}

void	Form::beSigned(const Bureaucrat & src) {
	if (_gradeToSign > src.getGrade())
		_signed = true;
	else
		throw GradeTooLowException();
}

void Form::execute(const Bureaucrat & executor) const {
	if (!_signed)
		throw FormNotSigned();
	else if (executor.getGrade() > _gradeToSign)
		throw GradeTooLowException();

	return ;
}

std::ostream &  operator<<(std::ostream & o, const Form & src) {
    o << "name: " << src.getName()
	    << " signed: " << src.getSigned()
		<< " grade to sign: " << src.getGradeToSign()
		<< " grade to execute: " << src.getGradeToExecute();
    return o;
}