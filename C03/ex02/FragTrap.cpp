#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

FragTrap::FragTrap(){
	cout << "Default FragTrap constructor " << endl;
	this->attackDamage = 30;
	this->hitPoint = 100;
	this->energyPoint = 100;
}

FragTrap::FragTrap(string name) : ClapTrap(name){
	cout << "FragTrap " << this->name << " is born" << endl;
	this->attackDamage = 30;
	this->hitPoint = 100;
	this->energyPoint = 100;
}

FragTrap::~FragTrap() {
	cout << "FragTrap " << this->name << " is destroyed" << endl;
}

FragTrap::FragTrap(const FragTrap &inst): ClapTrap(inst){
	cout << "Copiage de chose la" << endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs){
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->energyPoint = rhs.energyPoint;
	this->hitPoint = rhs.hitPoint;
	return *this;
}

void FragTrap::highFivesGuys(){
	if (this->hitPoint == 0){
		cout << "FragTrap " << this->name << " is dead, he can\'t ask for a high five :(" << endl;
		return;
	}
	else if (this->energyPoint == 0){
		cout << "FragTrap " << this->name << " is fatiguer, he can\'t ask for a high five :(" << endl;
		return;
	}
	else{
		cout << "FragTrap " << this->name << " is asking for a high five!!" << endl;
		this->energyPoint--;
	}
}

void FragTrap::attack(string name){
	if (this->hitPoint == 0){
		cout << "FragTrap " << this->name << " is dead, he cant attack :(" << endl;
		return;
	}
	if (this->energyPoint == 0){
		cout << "FragTrap " << this->name << " don\'t have energy left, he cant attack :(" << endl;
		return;
	}
	cout << "FragTrap " << this->name << " dealt " << this->attackDamage << " massive damage to " << name << endl;
	this->energyPoint--;
}