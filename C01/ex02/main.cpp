#include <iostream>

int	main(void){
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "Address de la str: " << &str << std::endl;
	std::cout << "Address de la stringPTR: " << stringPTR << std::endl;
	std::cout << "Address de la stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "Contenue de la str: " << str << std::endl;
	std::cout << "Contenue de la stringPTR: " << *stringPTR << std::endl;
	std::cout << "Contenue de la stringREF: " << stringREF << std::endl;
}