#include "Brain.hpp"
#include <cstddef>
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

void Brain::setIdea(string idea){
	for (int i = 0; i < 99; i++){
		if (this->ideas[i].empty()){
			this->ideas[i] = idea;
			return ;
		}
	}
	std::cout << "Trop d'idée, faudrait commencer a oublier des choses!!" << std::endl;
}

string Brain::getIdea(unsigned int i){
	if (i > 99 || i < 0){
		std::cout << "Le nombre d'idée est entre 0 inclus et 100 non inclus!" << std::endl;
		return (NULL);
	}
	return (this->ideas[i]);
}