#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>

Dog::Dog() : brains(new Brain()){
	std::cout << "Default Dog constructor " << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog &inst) : Animal(inst){
	std::cout << "Copy Dog constructor " << std::endl;
	*this = inst;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
	delete this->brains;
}

Dog& Dog::operator=(const Dog &rhs){
	// std::cout << "Dog operator = overide" << std::endl;
	this->type = rhs.getType();
	this->brains = new Brain(*rhs.brains);
	return *this;
}

void Dog::makeSound(void) const{
	cout << "WOOF" << endl;
}

const string &Dog::getType(void) const{
	return (this->type);
}

void Dog::giveIdea(string idea){
	this->brains->setIdea(idea);
}

string Dog::printIdea(unsigned int i){
	return this->brains->getIdea(i);
}