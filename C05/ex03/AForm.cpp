#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(): name(""), sign(false), gradeSign(150), gradeExecute(150){
}

AForm::AForm(string _name, unsigned int _gradeSign, unsigned int _gradeExecute): name(_name), sign(false), gradeSign(_gradeSign), gradeExecute(_gradeExecute){
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_gradeSign < 1 || _gradeExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	// else
		// cout << "Default AForm Constructor Called" << endl;
}

AForm::~AForm(){
	// cout << "Default AForm Destructor Called" << endl;
}

AForm::AForm(const AForm &inst): name(inst.name), gradeSign(inst.gradeSign), gradeExecute(inst.gradeExecute){
	*this = inst;
	cout << "Copy réussite?" << this << endl;
}

AForm &AForm::operator=(const AForm &rhs){
	if (this != &rhs) {

	}
	return *this;
}

const string	AForm::getName() const{
	return name;
}

bool	AForm::getSigned() const{
	return sign;
}

unsigned int	AForm::getGradeSign() const{
	return gradeSign;
}

unsigned int	AForm::getGradeExecute() const{
	return gradeExecute;
}

void	AForm::beSigned(Bureaucrat &bur){
	if (sign == true){
		cout << "AForm : " << name << " is already signed, dont waste ink" << endl;
		return;
	}
	if (bur.getGrade() > gradeSign)
		bur.signForm(name, false);
	else if (bur.getGrade() <= gradeSign){
		sign = true;
		bur.signForm(name, true);
	}
}

std::ostream &operator<<(std::ostream &o, AForm const &inst){
	o << "Name: " << inst.getName() << "	Sign: " << inst.getSigned() << "	Grade to sign: " << inst.getGradeSign() << "	Grade to execute: " << inst.getGradeExecute();
	return o;
}
