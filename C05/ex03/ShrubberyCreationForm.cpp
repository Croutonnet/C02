#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const string &target): AForm("ShrubberyForm", 145, 137), target(target){
	cout << BLUE "ShrubberyCreationForm Constructor Called" RESET << endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	cout << BLUE "Default ShrubberyCreationForm Destructor Called" RESET << endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &inst){
	*this = inst;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs){
	if (this != &rhs) {
	}
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bur) const{
	std::ofstream	oFile;

	if (bur.getGrade() >= getGradeExecute())
		throw GradeTooLowException();
	if (getSigned() == false)
		throw std::invalid_argument("ShrubberyCreationForm is not sign, you cant execute it");
	oFile.open(target + "_shrubbery");
	cout << GREEN "ShrubberyForm is planting trees!" RESET << endl;
	for(int j = 0; j < 5; j++){
		for(int i = 0; i < 28; i++){
			oFile << tree[i] << endl;
		}
	}
}