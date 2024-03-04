#pragma once

#include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;
class	RobotomyRequestForm: public AForm{
	public:
		RobotomyRequestForm(const string &target);
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &inst);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &rhs);
		virtual void execute(Bureaucrat const &bur) const;
	private:
		const string target;
};