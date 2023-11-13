#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class WrongAnimal{

	protected:
		string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const WrongAnimal &inst);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		void makeSound(void) const;
		const string &getType(void) const;
};