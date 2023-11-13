#include "AAnimal.hpp"
#include <iostream>

AAnimal::AAnimal() : type("vide"){
	std::cout << "Default AAnimal constructor " << std::endl;
}

AAnimal::AAnimal(const AAnimal &inst) {
	std::cout << "Copy AAnimal constructor " << std::endl;
	*this = inst;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &rhs) {
	std::cout << "AAnimal operator = overide" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	AAnimal::makeSound(void) const{
	std::cout << "NON" << std::endl;
}

const string &AAnimal::getType(void) const{
	return (this->type);
}