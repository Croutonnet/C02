#include "easyfind.hpp"

int main(void){
	int tab[] = {1, 2, 3, 2, 5, 6, 4, 8, 4, 10, 11, 22, 12 , 44 , 66};
	try{
		cout << easyfind(tab, 4) << endl;
	}catch(std::exception &e){
		cout << "ah bah non" << endl;
	}
}