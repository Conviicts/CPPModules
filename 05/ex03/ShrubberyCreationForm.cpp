#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", target, 145, 137) {
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &ref) : Form(ref) {
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return ;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &ref) {
	Form::operator=(ref);
	return (*this);
}

void    ShrubberyCreationForm::execute(const Bureaucrat & executor) const {
	std::string		name = getTarget() + "_shrubbery";
	std::ofstream   f(name.c_str());

	Form::execute(executor);

	if (!f.is_open()) {
		std::cout << "Cannot open the file." << std::endl;
		return ;
	}
	f <<	"       ###\n"
			"      #o###\n"
			"    #####o###\n"
			"   #o#\\#|#/###\n"
			"    ###\\|/#o#\n"
			"     # }|{  #\n"
			"       }|{\n";

	f.close();
	return ;
}

