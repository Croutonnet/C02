#pragma once
#include <iostream>
#include <string>

class Weapon{

	public:
		const std::string &getType();
		void setType(std::string str);
		Weapon();
		Weapon(std::string type);
		~Weapon();

	private:
		std::string type;
};