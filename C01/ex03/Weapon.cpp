#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon() {
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::Weapon(std::string type): type(type){
	std::cout << "Weapon constructor called" << std::endl;
}

Weapon::~Weapon() {
	std::cout << "Weapon destructor called" << std::endl;
}

void Weapon::setType(std::string str){
	this->type = str;
}

const std::string &Weapon::getType(){
	return this->type;
}