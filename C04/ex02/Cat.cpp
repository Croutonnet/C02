#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"
#include <iostream>

Cat::Cat(){
	std::cout << "Default Cat constructor " << std::endl;
	this->type = "Cat";
	this->brains = new Brain;
}

Cat::Cat(const Cat &inst){
	std::cout << "Copy Cat constructor " << std::endl;
	*this = inst;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete this->brains;
}

Cat& Cat::operator=(const Cat &rhs){
	std::cout << "Cat operator = overide" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void Cat::makeSound(void) const{
	cout << "MEOW" << endl;
}

const string &Cat::getType(void) const{
	return (this->type);
}