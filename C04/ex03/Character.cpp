#include "Character.hpp"
#include <malloc/_malloc.h>

Character::Character(){
	std::cout << "Default Character Constructor Called" << std::endl;
}

Character::Character(std::string name): name(name){
	std::cout << "Default Character Constructor Called" << std::endl;
}

Character::~Character(){
	std::cout << "Default Character Destructor Called" << std::endl;
}

Character::Character(const Character &inst){
	std::cout << "Copy Character Called" << std::endl;
	*this = inst;
}

void Character::free_inventory(){
	for (int i = 0; i < 4; i++){
		if (this->inventory[i]){
			delete this->inventory[i];
			this->inventory[i] = NULL;
		}
	}
}

Character &Character::operator=(const Character &rhs){
	if (this != &rhs){
		this->name = rhs.name;
		free_inventory();
		for (int i = 0; i < 4; i++){
			if (rhs.inventory[i])
				this->inventory[i] = rhs.inventory[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const{
	return this->name;
}

void Character::equip(AMateria *m){
	std::cout << "uwu " << m->getType() << std::endl;
	for (int i = 0; i < 4; i++){
		if (this->inventory[i] == NULL){
			this->inventory[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx){
	if (idx > 4 || idx < 0){
		std::cout << "Not int the inventory scope" << std::endl;
		return ;
	}
	for (int i = 0; i < 50; i++){
		if (this->floor[i] == NULL){
			this->floor[i] = this->inventory[idx];
			this->inventory[idx] = NULL;
			return ;
		}
	}
	std::cout << "Floor is full, you can\'t drop anything" << std::endl;
}

void Character::use(int idx, ICharacter &target){
	if (idx > 4 || idx < 0){
		std::cout << "Not int the inventory scope" << std::endl;
		return ;
	}
	this->inventory[idx]->use(target);
}