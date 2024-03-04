#pragma once

#include "AForm.hpp"

using std::cout;
using std::endl;
using std::string;

static const char * const tree[28] =	{
	"	                                                   .",
	"	                                    .         ;  	",
	"	       .              .              ;%     ;;   	",
	"	         ,           ,                :;%  %;   	",
	"	          :         ;                   :;%;'     .,",
	"	 ,.        %;     %;            ;        %;'    ,;	",
	"	   ;       ;%;  %%;        ,     %;    ;%;    ,%'	",
	"	    %;       %;%;      ,  ;       %;  ;%;   ,%;' 	",
	"	     ;%;      %;        ;%;        % ;%;  ,%;'		",
	"	      `%;.     ;%;     %;'         `;%%;.%;'		",
	"	       `:;%.    ;%%. %@;        %; ;@%;%'			",
	"	          `:%;.  :;bd%;          %;@%;'				",
	"	            `@%:.  :;%.         ;@@%;'   			",
	"	              `@%.  `;@%.      ;@@%;         		",
	"	                `@%%. `@%%    ;@@%;        			",
	"	                  ;@%. :@%%  %@@%;       			",
	"	                    %@bd%%%bd%%:;     				",
	"	                      #@%%%%%:;;					",
	"	                      %@@%%%::;						",
	"	                      %@@@%(o);  . '         		",
	"	                      %@@@o%;:(.,'         			",
	"	                  `.. %@@@o%::;         			",
	"	                     `)@@@o%::;         			",
	"	                      %@@(o)::;        				",
	"	                     .%@@@@%::;         			",
	"	                     ;%@@@@%::;.          			",
	"	                    ;%@@@@%%:;;;. 					",
	"	                ...;%@@@@@%%:;;;;,..				"
};

class	ShrubberyCreationForm : public AForm{
	public:
		ShrubberyCreationForm(const string &target);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &inst);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &rhs);
		virtual void execute(Bureaucrat const &bur) const;
	private:
		const string target;
};