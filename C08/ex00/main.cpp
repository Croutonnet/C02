#include "easyfind.hpp"
#include <vector>

int main(void){
	std::vector<int> vec;
	for(int i = 0; i < 15; i++){
		vec.push_back(i);
	}
	try{
		std::vector<int>::iterator it = easyfind(vec, -1);
		cout << *it << endl;
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
}