#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class AAnimal{

	protected:
		string type;
	public:
		AAnimal();
		virtual ~AAnimal() = 0;
		AAnimal(const AAnimal &inst);
		AAnimal &operator=(const AAnimal &rhs);
		virtual void makeSound(void) const = 0;
		const string &getType(void) const;
};