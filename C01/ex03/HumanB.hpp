#pragma once
#include "Weapon.hpp"

class HumanB{
	public:
		void attack();
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void setType(std::string name);
		void setWeapon(Weapon &weapon);

	private:
		Weapon *weapon;
		std::string name;
};