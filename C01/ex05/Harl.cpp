#include "Harl.hpp"
#include <iostream>

Harl::Harl(){
	std::cout << "Constructor called" << std::endl;
}

Harl::~Harl(){
	std::cout << "Destructor called" << std::endl;
}

void	Harl::debug(){
	std::cout << "\"DEBUG\"" << std::endl;
	std::cout << "Je debug quelque chose probablement" << std::endl;
}

void	Harl::info(){
	std::cout << "\"INFO\"" << std::endl;
	std::cout << "Je donne des informations, lesquelles? Je sais pas" << std::endl;
}

void	Harl::warning(){
	std::cout << "\"WARNING\"" << std::endl;
	std::cout << "Attention personne de type loup!!" << std::endl;
}

void	Harl::error(){
	std::cout << "\"ERROR\"" << std::endl;
	std::cout << "HIHIHIHIIH erreur" << std::endl;
}

void Harl::complain( std::string level ){
	static void	(Harl::*pointer[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	static std::string	types[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++){
		if (types[i] == level)
			(this->*pointer[i])();
	}
}