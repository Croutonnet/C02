#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::~Cure(){
	std::cout << "Cure Destructor called" << std::endl;
}

Cure::Cure(const Cure &inst){
	std::cout << "Copy Cure Called" << std::endl;
	*this = inst;
}

Cure &Cure::operator=(const Cure &rhs){
	if (this != &rhs){
	}
	return *this;
}

AMateria *Cure::clone() const{
	AMateria *clone = new Cure(*this);
	return clone;
}

void Cure::use(ICharacter &target){
	std::cout << "Heals " << target.getName() << "\'s wounds" << std::endl;
}