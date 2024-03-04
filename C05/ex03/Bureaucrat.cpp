#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(unsigned int _grade, const std::string _name): grade(0), name(_name){
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else{
		grade = _grade;
		// std::cout << "Bureaucrat " << name << " with grade " << grade << " is constructed" << std::endl;
	}
}

Bureaucrat::~Bureaucrat(){
	// std::cout << "Bureaucrat " << name << " with grade " << grade << " is destructed" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &inst){
	*this = inst;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs){
	if (this != &rhs){
		grade = rhs.grade;
	}
	return *this;
}

unsigned int	Bureaucrat::getGrade() const{
	return (grade);
}

const std::string Bureaucrat::getName() const{
	return (name);
}

void	Bureaucrat::incrementGrade(){
	if (grade - 1 < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = grade - 1;
}

void	Bureaucrat::desincrementGrade(){
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooHighException();
	else
		grade = grade + 1;
}

void	Bureaucrat::signForm(std::string formName, bool didIt){
	if (didIt == true){
		std::cout << name << " signed the form : " << formName << std::endl;
	}
	else {
		std::cout << name << " couldn\'t sign the form : " << formName << " because his grade to sign was too low" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form){
	if (form.getSigned() == false)
		throw std::invalid_argument(form.getName() + " is not sign, you cant execute it");
	else if (getGrade() >= form.getGradeExecute()){
		cout << RED + getName() + " could not execute the form " + form.getName() + " because " RESET;
		throw GradeTooLowException();
	}
	cout << getName() + " is executing " + form.getName() << endl;
	form.execute(*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &inst){
	o << inst.getName() << ", bureaucrat grade " << inst.getGrade();
	return o;
}
