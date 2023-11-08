#pragma once

#include "Animal.hpp"

class Dog : public Animal{

	public:
		Dog();
		~Dog();
		Dog(const Dog &inst);
		Dog &operator=(const Dog &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
};