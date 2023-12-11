#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("vide"){
	std::cout << "Default WrongAnimal constructor " << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &inst) {
	std::cout << "Copy WrongAnimal constructor " << std::endl;
	*this = inst;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &rhs) {
	std::cout << "WrongAnimal operator = overide" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	WrongAnimal::makeSound(void) const{
	std::cout << "MAUVAIS NANIMAL" << std::endl;
}

const string &WrongAnimal::getType(void) const{
	return (this->type);
}