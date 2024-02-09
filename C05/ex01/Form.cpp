#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(string _name, unsigned int _gradeSign, unsigned int _gradeExecute): name(_name), sign(false), gradeSign(_gradeSign), gradeExecute(_gradeExecute){
	if (_gradeSign > 150 || _gradeExecute > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_gradeSign < 1 || _gradeExecute < 1)
		throw Bureaucrat::GradeTooHighException();
	// else
		// cout << "Default Form Constructor Called" << endl;
}

Form::~Form(){
	// cout << "Default Form Destructor Called" << endl;
}

Form::Form(const Form &inst): name(inst.name), gradeSign(inst.gradeSign), gradeExecute(inst.gradeExecute){
	*this = inst;
	cout << "Copy réussite?" << this << endl;
}

Form &Form::operator=(const Form &rhs){
	if (this != &rhs) {

	}
	return *this;
}

const string	Form::getName() const{
	return name;
}

bool	Form::getSigned() const{
	return sign;
}

unsigned int	Form::getGradeSign() const{
	return gradeSign;
}

unsigned int	Form::getGradeExecute() const{
	return gradeExecute;
}

void	Form::beSigned(Bureaucrat &bur){
	if (sign == true){
		cout << "Form : " << name << " is already signed, dont waste ink" << endl;
		return;
	}
	if (bur.getGrade() > gradeSign)
		bur.signForm(name, false);
	else if (bur.getGrade() <= gradeSign){
		sign = true;
		bur.signForm(name, true);
	}
}

std::ostream &operator<<(std::ostream &o, Form const &inst){
	o << "Name: " << inst.getName() << "	Sign: " << inst.getSigned() << "	Grade to sign: " << inst.getGradeSign() << "	Grade to execute: " << inst.getGradeExecute();
	return o;
}
