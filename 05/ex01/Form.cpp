
#include "Form.hpp"

Form::Form(std::string name, int gradeTosign, int gradeToExecute) : _name(name), _signed(false) {
    if (gradeTosign < 1)
        throw GradeTooHighException();
    if (gradeTosign > 150)
        throw GradeTooLowException();
    _gradeToSign = gradeTosign;
    if (gradeToExecute < 1)
        throw GradeTooHighException();
    if (gradeToExecute > 150)
        throw GradeTooLowException();
    _gradeToExecute = gradeToExecute;
    return ;
}

Form::~Form(void) {
    return ;
}

Form::Form(Form const &ref) {
    _name = ref._name;
    _gradeToExecute = ref._gradeToExecute;
    _gradeToSign = ref._gradeToSign;
}


Form	&Form::operator=(Form const &ref) {
    _name = ref._name;
    _gradeToExecute = ref._gradeToExecute;
    _gradeToSign = ref._gradeToSign;

    return (*this);
}

std::string	Form::getName() const {
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

void	Form::beSigned(const Bureaucrat & src) {
	if (_gradeToSign > src.getGrade())
		_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream &  operator<<(std::ostream & o, const Form & src) {
    o << "name: " << src.getName()
	    << " signed: " << src.getSigned()
		<< " grade to sign: " << src.getGradeToSign()
		<< " grade to execute: " << src.getGradeToExecute();
    return o;
}