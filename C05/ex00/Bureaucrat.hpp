#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
#include <exception>
#include <iostream>

class	Bureaucrat{
	public:
		class	GradeTooHighException : public std::exception{
			public:
				const char* what() const throw() {
					return ("Your grade is too high, it must be between 1 and 150");
				}
		};
		class	GradeTooLowException : public std::exception{
			public:
				const char* what() const throw() {
					return ("Your grade is low high, it must be between 1 and 150");
				}
		};
		Bureaucrat(unsigned int _grade, const std::string _name);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &inst);
		Bureaucrat	&operator=(const Bureaucrat &rhs);
		const std::string	getName();
		unsigned int		getGrade();
		void				incrementGrade();
		void				desincrementGrade();
	private:
		unsigned int		grade;
		const std::string	name;
};
std::ostream &operator<<(std::ostream &o, Bureaucrat const &inst);
#endif