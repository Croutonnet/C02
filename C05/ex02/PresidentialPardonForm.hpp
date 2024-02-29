#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
class	PresidentialPardonForm: AForm{
	public:
		PresidentialPardonForm();
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &inst);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &rhs);
		void	beSigned(Bureaucrat &br);

	private:
};