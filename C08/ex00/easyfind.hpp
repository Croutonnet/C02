#pragma once

#include <exception>
#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::string;

template<typename T>
int	easyfind(T *var, int n){
	int i = 0;
	while(var[i]){
		if (var[i] == n)
			return i;
		i++;
	}
	throw std::out_of_range("The int is not inside the container");
}