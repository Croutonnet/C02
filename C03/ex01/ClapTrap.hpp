#pragma once

#include "ClapTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClapTrap{

	protected:
		string			name;
		unsigned int	hitPoint;
		unsigned int	energyPoint;
		unsigned int	attackDamage;
	public:
		ClapTrap();
		ClapTrap(string name);
		~ClapTrap();
		ClapTrap(const ClapTrap &inst);
		ClapTrap	&operator=(const ClapTrap &rhs);

		void	attack(const string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

};
