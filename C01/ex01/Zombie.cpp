#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
	// std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name): name(name){
	// std::cout << "Constructor called" << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->name + " is dead" << std::endl;
}

void Zombie::announce(){
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}