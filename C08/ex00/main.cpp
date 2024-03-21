#include <exception>
#include <iostream>
#include <stdexcept>

using std::cout;
using std::endl;
using std::string;

template<class T>
int	easyfind(T *var, int n){
	int i = 0;
	while(var[i]){
		if (var[i] == n)
			return i;
		i++;
	}
	throw std::out_of_range("The int is not inside the container");
}

int main(void){
	int tab[] = {1, 2, 3, 4, 5, 6, 7, 8, 4, 10, 11, 22, 12 , 44 , 66};
	try{
		cout << easyfind(tab, 4) << endl;
	}catch(std::exception &e){
		cout << "ah bah non" << endl;
	}
}