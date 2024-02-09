#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void){
	try {
		Form form("mamadou", 2, 2);
		Form form1("toi mem", 2, 2);
		Form form2("ok", 2, 2);
		Bureaucrat toi(1, "toi");
		Bureaucrat moi(2, "moi");
		Bureaucrat nous(3, "nous");
		form.beSigned(toi);
		form1.beSigned(moi);
		form1.beSigned(moi);
		form2.beSigned(nous);
		form2.beSigned(nous);
		form2.beSigned(nous);
	} catch (Form::GradeTooHighException &e){
		e.what();
	} catch (Form::GradeTooLowException &e){
		e.what();
	} catch (Bureaucrat::GradeTooHighException &e){
		e.what();
	} catch (Bureaucrat::GradeTooLowException &e){
		e.what();
	}
}