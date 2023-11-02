#pragma once
#include "Weapon.hpp"

class HumanA{
	public:
		void attack();
		HumanA();
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

	private:
		Weapon *weapon;
		std::string name;
};