#include "Brain.hpp"
#include <iostream>

Brain::Brain(){
	std::cout << "Default Brain constructor " << std::endl;
}

Brain::Brain(const Brain &inst){
	std::cout << "Copy Brain constructor " << std::endl;
	*this = inst;
}

Brain::~Brain(){
	std::cout << "Brain destructor" << std::endl;
}

Brain& Brain::operator=(const Brain &rhs){
	std::cout << "Brain operator = overide" << std::endl;
	if (this != &rhs){
		for (int i = 0; i < 100; i++){
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}