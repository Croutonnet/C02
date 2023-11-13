#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("vide"){
	std::cout << "Default Animal constructor " << std::endl;
}

Animal::Animal(const Animal &inst) {
	std::cout << "Copy Animal constructor " << std::endl;
	*this = inst;
}

Animal::~Animal() {
	std::cout << "Animal destructor" << std::endl;
}

Animal& Animal::operator=(const Animal &rhs) {
	std::cout << "Animal operator = overide" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void	Animal::makeSound(void) const{
	std::cout << "NON" << std::endl;
}

const string &Animal::getType(void) const{
	return (this->type);
}