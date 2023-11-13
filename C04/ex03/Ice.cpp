#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(){
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice(){
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice &inst){
	std::cout << "Copy Ice Called" << std::endl;
	*this = inst;
}

Ice &Ice::operator=(const Ice &rhs){
	if (this != &rhs){
	}
	return *this;
}

AMateria *Ice::clone() const{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter &target){
	std::cout << "Shoots Iceball to " << target.getName() << std::endl;
}

