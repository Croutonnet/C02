#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

template<typename T>
typename T::iterator easyfind(T var, int n){
	typename T::iterator it = std::find(var.begin(), var.end(), n);
	if (it == var.end())
		throw std::out_of_range("The int is not inside the container");
	return it;
}