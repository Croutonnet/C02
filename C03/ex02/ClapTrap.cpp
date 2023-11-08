#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): hitPoint(10), energyPoint(10), attackDamage(0){
	std::cout << "Default ClapTrap constructor " << std::endl;
}

ClapTrap::ClapTrap(string name): name(name), hitPoint(10), energyPoint(10), attackDamage(0){
	std::cout << "Default ClapTrap constructor with name" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &inst){
	*this = inst;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs){
	this->name = rhs.name;
	this->attackDamage = rhs.attackDamage;
	this->energyPoint = rhs.energyPoint;
	this->hitPoint = rhs.hitPoint;
	return *this;
}

void	ClapTrap::attack(const string &target){
	if (this->hitPoint == 0){
		cout << "ClapTrap " << this->name << " is sadly no longer with us, you can\'t attack :(" << endl;
		return;
	}
	if (this->energyPoint == 0){
		cout << "ClapTrap doesnt have enought Energy Point to attack, he need to recharge!" << endl;
		return;
	}
	cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << endl;
	this->energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoint == 0){
		cout << "OK STOP ClapTrap " << this->name << " IS ALREADY DEAD, STOP YOU MONSTER" << endl;
		return ;
	}
	if (this->hitPoint < amount || this->hitPoint - amount == 0){
		cout << "You killed ClapTrap " << this->name << " congrats" << endl;
		this->hitPoint = 0;
		return ;
	}
	this->hitPoint -= amount;
	cout << "ClapTrap " << this->name << " just received " << amount << " point of damage, now he\'s got " << this->hitPoint << " HP" << endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	if (this->hitPoint == 0){
		cout << "ClapTrap " << this->name << " is sadly no longer with us, you cant repair him :(" << endl;
		return;
	}
	if (this->energyPoint == 0){
		cout << "ClapTrap " << this->name << " doesn\'t have enought Energy Point to repair, he need to recharge!" << endl;
		return;
	}
	this->hitPoint += amount;
	cout << "ClapTrap " << this->name << " repaired himself for " << amount << " now he have " << this->hitPoint << " hp" << endl;
	this->energyPoint--;
}
