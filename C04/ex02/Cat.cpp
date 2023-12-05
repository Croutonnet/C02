#include "Cat.hpp"
#include <iostream>

Cat::Cat() : brains(new Brain()){
	std::cout << "Default Cat constructor " << std::endl;
}

Cat::Cat(const Cat &inst) : AAnimal(inst){
	std::cout << "Copy Cat constructor " << std::endl;
	*this = inst;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
	delete this->brains;
}

Cat& Cat::operator=(const Cat &rhs){
	// std::cout << "Cat operator = overide" << std::endl;
	this->type = rhs.getType();
	this->brains = new Brain(*rhs.brains);
	return *this;
}

void Cat::makeSound(void) const{
	cout << "MEOW" << endl;
}

const string &Cat::getType(void) const{
	return (this->type);
}

void Cat::giveIdea(string idea){
	this->brains->setIdea(idea);
}

string Cat::printIdea(unsigned int i){
	return this->brains->getIdea(i);
}