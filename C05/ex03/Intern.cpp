#include "Intern.hpp"
#include <stdexcept>

Intern::Intern(){
	cout << BLUE "Default Intern Constructor Called" RESET << endl;
}

Intern::~Intern(){
	cout << BLUE "Default Intern Destructor Called" RESET << endl;
}

Intern::Intern(const Intern &inst){
	*this = inst;
}

Intern &Intern::operator=(const Intern &rhs){
	if (this != &rhs) {

	}
	return *this;
}

AForm *Intern::makeForm(const string &name, const string &target){
	AForm *out;
	const string oui[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int i = 0;

	while (i < 3 && oui[i] != name)
		i++;
	switch (i) {
		case 0:
			out = new RobotomyRequestForm(target);
			break;
		case 1:
			out = new ShrubberyCreationForm(target);
			break;
		case 2:
			out = new PresidentialPardonForm(target);
			break;
		default:
			throw std::invalid_argument("Intern can't create a nothing form");
	}
	cout << "Intern creates" + out->getName() << endl;
	return (out);
}