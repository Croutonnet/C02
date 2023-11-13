#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(){
	std::cout << "Default WrongCat constructor " << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &inst){
	std::cout << "Copy WrongCat constructor " << std::endl;
	*this = inst;
}

WrongCat::~WrongCat(){
	std::cout << "WrongCat destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &rhs){
	std::cout << "WrongCat operator = overide" << std::endl;
	if (this != &rhs)
		this->type = rhs.type;
	return *this;
}

void WrongCat::makeSound(void) const{
	cout << "MEOW" << endl;
}

const string &WrongCat::getType(void) const{
	return (this->type);
}