#pragma once

#include "ClapTrap.hpp"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class FragTrap: public ClapTrap{
	public:
		FragTrap();
		~FragTrap();
		FragTrap(string name);
		FragTrap(const FragTrap &inst);
		FragTrap &operator=(const FragTrap &rhs);

		void highFivesGuys(void);
		void attack(string name);
};