#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal{

	private:
		Brain *brains;
	public:
		Dog();
		~Dog();
		Dog(const Dog &inst);
		Dog &operator=(const Dog &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
		void giveIdea(string idea);
		string printIdea(unsigned int i);
};