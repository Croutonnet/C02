#pragma once

#include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;
class	PresidentialPardonForm: public AForm{
	public:
		PresidentialPardonForm(const string &target);
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &inst);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
		virtual void execute(Bureaucrat const &bur) const;
	private:
		const string target;
};