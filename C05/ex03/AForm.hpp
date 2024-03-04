#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define YELLOW  "\033[33m"
#define BLACK   "\033[30m"
#define WHITE   "\033[37m"
#define RESET   "\033[0m"
#define PURPLE "\033[38;5;165m"

using std::cout;
using std::endl;
using std::string;

class Bureaucrat;

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
		AForm();
		AForm(string _name, unsigned int _gradeSign, unsigned int _gradeExecute);
		AForm(const AForm &inst);
		virtual ~AForm();
		virtual void		execute(Bureaucrat const &bur) const = 0;
		void				beSigned(Bureaucrat &bur);
		const string		getName() const;
		bool				getSigned() const;
		unsigned int		getGradeSign() const;
		unsigned int		getGradeExecute() const;

		AForm& operator=(const AForm &rhs);
		
	private:
		const string name;
		bool sign;
		const unsigned int gradeSign;
		const unsigned int gradeExecute;
};
std::ostream &operator<<(std::ostream &o, AForm const &inst);
