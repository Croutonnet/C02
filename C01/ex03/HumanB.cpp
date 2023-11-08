#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(){
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::HumanB(std::string name):weapon(NULL), name(name){
	std::cout << "HumanB constructor called" << std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanB destructor called" << std::endl;
}

void HumanB::attack(){
	if (!this->weapon)
		std::cout << this->name << " doesn\'t have a weapon, so he\'s using his fist" << std::endl;
	else
		std::cout << this->name + " attacks with their " + this->weapon->getType() << std::endl;
}

void HumanB::setType(std::string str){
	this->name = str;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;
}