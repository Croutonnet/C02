#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat pappy(75, "pappy");
		std::cout << pappy << std::endl;
		Bureaucrat mommy(1, "mommy");
		Bureaucrat high(0, "high");
		mommy.incrementGrade();
	}catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what();
	}catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what();
	}
}