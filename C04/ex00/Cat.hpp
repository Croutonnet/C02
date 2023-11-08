#pragma once

#include "Animal.hpp"

class Cat : public Animal{

	public:
		Cat();
		~Cat();
		Cat(const Cat &inst);
		Cat &operator=(const Cat &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
};