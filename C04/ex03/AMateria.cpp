#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria(){
	std::cout << "Default AMateria constructor " << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type){
	std::cout << "AMateria with string Constructor called" << std::endl;
}

AMateria::~AMateria(){
	std::cout << "AMateria destructor" << std::endl;
}

AMateria::AMateria(const AMateria &inst){
	std::cout << "Copy AMateria constructor " << std::endl;
	*this = inst;
}

AMateria& AMateria::operator=(const AMateria &rhs){
	// std::cout << "AMateria operator = overide" << std::endl;
	if (this != &rhs){
		this->type = rhs.type;
	}
	return *this;
}

std::string const &AMateria::getType()const{
	return this->type;
}

void AMateria::use(ICharacter &target){
	std::cout << "*AMateria template used on " << target.getName() << ". HOW?*" << std::endl;
}
