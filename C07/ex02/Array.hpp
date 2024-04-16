#pragma once

#include <iostream>

using std::string;
using std::cout;
using std::endl;

template<typename T>
class	Array{
	public:
		Array<T>();
		Array<T>(unsigned int n);
		~Array<T>();
		Array<T>(const Array &inst);
		Array<T>& operator=(const Array &rhs);
		T&	operator[](const unsigned int i) const;
		const unsigned int &size() const;
	private:
	T				*_array;
	const unsigned	int _size;
};

#include "Array.tpp"