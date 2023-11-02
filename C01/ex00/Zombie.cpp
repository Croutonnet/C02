#include "Zombie.hpp"
#include <iostream>
#include <iterator>

Zombie::Zombie(){
	std::cout << "Constructor called" << std::endl;
}

Zombie::Zombie(std::string name): name(name){
	std::cout << "Destructor called" << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->name + " is dead" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}