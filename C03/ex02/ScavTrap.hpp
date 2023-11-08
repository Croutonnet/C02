#pragma once

#include "ClapTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ScavTrap: public ClapTrap{

	private:
		bool			gateKeeper;
	public:
		ScavTrap();
		~ScavTrap();
		ScavTrap(string name);
		ScavTrap(const ScavTrap &inst);
		ScavTrap &operator=(const ScavTrap &rhs);

		void guardGate();
		void attack(string name);
};