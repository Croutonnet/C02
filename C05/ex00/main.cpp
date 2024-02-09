#include "Bureaucrat.hpp"

int	main(){
	try{
		Bureaucrat pappy(75, "pappy");
		Bureaucrat mommy(1, "mommy");
		Bureaucrat toi(0, "toi");
		mommy.incrementGrade();
	}catch(Bureaucrat::GradeTooHighException &e){
		std::cout << e.what();
	}catch(Bureaucrat::GradeTooLowException &e){
		std::cout << e.what();
	}
}