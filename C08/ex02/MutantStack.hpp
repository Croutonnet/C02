#pragma once

#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::string;
template<class T>
class	MutantStack: public std::stack<T>{
	public:
		MutantStack();
		~MutantStack();
		MutantStack(const MutantStack &inst);
		MutantStack& operator=(const MutantStack &rhs);
	private:
};