#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(unsigned int _grade, const std::string _name): grade(0), name(_name){
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else{
		grade = _grade;
		std::cout << "Bureaucrat " << name << " with grade " << grade << " is constructed" << std::endl;
	}
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat " << name << " with grade " << grade << " is destructed" << std::endl;
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
		throw Bureaucrat::GradeTooHighException();
	else
		grade = grade - 1;
}

void	Bureaucrat::desincrementGrade(){
	if (grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = grade + 1;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &inst){
	o << inst.getName() << ", bureaucrat grade " << inst.getGrade();
	return o;
}
