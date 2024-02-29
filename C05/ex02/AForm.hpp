#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
class	AForm{
	public:
		class	GradeTooHighException : public std::exception{
			public:
				const char* what() const throw() {
					return ("Your grade is too high");
				}
		};
		class	GradeTooLowException : public std::exception{
			public:
				const char* what() const throw() {
					return ("Your grade is too low");
				}
		};
		AForm(string _name, unsigned int _gradeSign, unsigned int _gradeExecute);
		virtual ~AForm();
		AForm(const AForm &inst);
		virtual void	beSigned(Bureaucrat &bur) = 0;
		const string		getName() const;
		bool				getSigned() const;
		unsigned int		getGradeSign() const;
		unsigned int		getGradeExecute() const;

		AForm& operator=(const AForm &rhs);
		
	protected:
		const string name;
		bool sign;
		const unsigned int gradeSign;
		const unsigned int gradeExecute;
};
std::ostream &operator<<(std::ostream &o, AForm const &inst);
