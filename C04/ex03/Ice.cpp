#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice"){
	// std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice(){
	// std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(const Ice &inst) : AMateria(inst){
	// std::cout << "Copy Ice Called" << std::endl;
	*this = inst;
}

Ice &Ice::operator=(const Ice &rhs){
	(void) rhs;
	return *this;
}

AMateria *Ice::clone() const{
	AMateria *clone = new Ice(*this);
	return clone;
}

void Ice::use(ICharacter &target){
	std::cout << "*Shoots Iceball at " << target.getName() << "*" << std::endl;
}

