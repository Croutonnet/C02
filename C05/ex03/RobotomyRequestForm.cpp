#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const string &target): AForm("RobotomyRequestForm", 72, 45), target(target){
	cout << BLUE "RobotomyRequestForm Constructor Called" RESET << endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	cout << BLUE "Default RobotomyRequestForm Destructor Called" RESET << endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &inst){
	*this = inst;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs){
	if (this != &rhs) {

	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &bur) const{
	if (bur.getGrade() >= getGradeExecute())
		throw GradeTooLowException();
	if (getSigned() == false)
		throw std::invalid_argument("RobotomyRequestForm is not sign, you cant execute it");
	std::srand(static_cast<unsigned>(std::time(0)));
	int randomValue = std::rand() % 2;
	if (randomValue == 0){
		cout << GREEN "The target \"" + target + "\" has been robotomized" RESET << endl;
	}else{
		cout << YELLOW "Robotomization on the target \"" + target + "\" has failed miserably" RESET << endl;
	}
}