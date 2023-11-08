#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : gateKeeper(false){
	cout << "Default ScavTrap constructor " << endl;
	this->attackDamage = 20;
	this->hitPoint = 100;
	this->energyPoint = 50;
}

ScavTrap::ScavTrap(string name) : ClapTrap(name), gateKeeper(false){
	cout << "ScavTrap " << this->name << " is born" << endl;
	this->attackDamage = 20;
	this->hitPoint = 100;
	this->energyPoint = 50;
}

ScavTrap::~ScavTrap() {
	cout << "ScavTrap " << this->name << "is destroyed" << endl;
}

ScavTrap::ScavTrap(const ScavTrap &inst): ClapTrap(inst){
	cout << "Copiage de chose la" << endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs){
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->energyPoint = rhs.energyPoint;
	this->hitPoint = rhs.hitPoint;
	this->gateKeeper = rhs.gateKeeper;
	return *this;
}

void ScavTrap::guardGate(){
	if (this->hitPoint == 0){
		cout << "ScavTrap " << this->name << " is dead, he can\'t guardGate :(" << endl;
		return;
	}
	if (this->energyPoint == 0){
		cout << "ScavTrap " << this->name << " don\'t have energy left, he can\'t guardGate :(" << endl;
		return;
	}
	if (this->gateKeeper == true){
		cout << "ScavTrap " << this->name << " Gate keep is now offline" << endl;
		this->gateKeeper = false;
	}
	else{
		cout << "ScavTrap " << this->name << " Gate keep is now online" << endl;
		this->gateKeeper = true;
	}
}

void ScavTrap::attack(string name){
	if (this->hitPoint == 0){
		cout << "ScavTrap " << this->name << " is dead, he cant attack :(" << endl;
		return;
	}
	if (this->energyPoint == 0){
		cout << "ScavTrap " << this->name << " don\'t have energy left, he cant attack :(" << endl;
		return;
	}
	cout << "ScavTrap " << this->name << " dealt " << this->attackDamage << " damage to " << name << endl;
	this->energyPoint--;
}