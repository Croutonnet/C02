#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(){
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::HumanB(std::string name): name(name){
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack(){
	std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}

void HumanB::setType(std::string name){
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}