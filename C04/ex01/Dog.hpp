#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{

	private:
		Brain *brains;
	public:
		Dog();
		~Dog();
		Dog(const Dog &inst);
		Dog &operator=(const Dog &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
};