#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Animal{

	protected:
		string type;
	public:
		Animal();
		virtual ~Animal();
		Animal(const Animal &inst);
		Animal &operator=(const Animal &rhs);
		virtual void makeSound(void) const;
		const string &getType(void) const;
};