#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{

	private:
		Brain *brains;
	public:
		Cat();
		~Cat();
		Cat(const Cat &inst);
		Cat &operator=(const Cat &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
		void giveIdea(string idea);
		string printIdea(unsigned int i);
};