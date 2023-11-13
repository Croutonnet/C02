#pragma once

#include <iostream>
using std::string;
using std::endl;
using std::cout;

class Brain{
	private:
		string ideas[100];
	public:
		Brain();
		~Brain();
		Brain(const Brain &inst);
		Brain &operator=(const Brain &rhs);

};