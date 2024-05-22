#pragma once

#include <iostream>
#include <iterator>
#include <stack>

using std::cout;
using std::endl;
using std::string;

template<typename  T>
class	MutantStack: public std::stack<T>{
	public:
		MutantStack(){cout << "Default Constructor" << endl;};
		~MutantStack(){cout << "Default Destructor" << endl;};
		MutantStack(const MutantStack &inst){this = inst;};
		MutantStack& operator=(const MutantStack &rhs){return(rhs);};
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin(){return(std::stack<T>::c.begin());}
		iterator end(){return(std::stack<T>::c.end());}
	private:
};