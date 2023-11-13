#pragma once

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

	private:
		std::string name;
		AMateria *inventory[4];
		AMateria *floor[50];
	public:
		Character();
		Character(std::string name);
		~Character();
		Character(const Character &inst);

		Character &operator=(const Character &rhs);

		std::string const &getName() const;
		void free_inventory();
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};