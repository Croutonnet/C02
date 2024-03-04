#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const string &target): AForm("PresidentialPardonForm", 25, 5), target(target){
	cout << "Default PresidentialPardonForm Constructor Called" << endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
	cout << "Default PresidentialPardonForm Destructor Called" << endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &inst){
	*this = inst;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs){
	if (this != &rhs) {

	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &bur) const{
	if (bur.getGrade() >= getGradeExecute())
		throw GradeTooLowException();
	if (getSigned() == false)
		throw std::invalid_argument("PresidentionPardonForm is not sign, you cant execute it");
	cout << GREEN << "Our lord and savior Zaphod Beeblebrox has pardon the target \"" + target + "\"" RESET << endl;
}