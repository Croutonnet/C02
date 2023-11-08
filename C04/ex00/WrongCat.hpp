#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

	public:
		WrongCat();
		~WrongCat();
		WrongCat(const WrongCat &inst);
		WrongCat &operator=(const WrongCat &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
};