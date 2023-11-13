#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal{

	private:
		Brain *brains;
	public:
		Cat();
		~Cat();
		Cat(const Cat &inst);
		Cat &operator=(const Cat &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
};