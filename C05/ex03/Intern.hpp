#pragma once

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

using std::cout;
using std::endl;
using std::string;

class	Intern{
	public:
		Intern();
		~Intern();
		Intern(const Intern &inst);
		Intern& operator=(const Intern &rhs);
		AForm	*makeForm(const string &name, const string &target);
	private:
};