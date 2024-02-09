#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

using std::cout;
using std::endl;
using std::string;
class	Form{
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
		Form(string _name, unsigned int _gradeSign, unsigned int _gradeExecute);
		~Form();
		Form(const Form &inst);
		Form& operator=(const Form &rhs);
		const string		getName() const;
		bool				getSigned() const;
		unsigned int	getGradeSign() const;
		unsigned int	getGradeExecute() const;
		void			beSigned(Bureaucrat &bur);

	private:
		const string name;
		bool sign;
		const unsigned int gradeSign;
		const unsigned int gradeExecute;
};
std::ostream &operator<<(std::ostream &o, Form const &inst);
