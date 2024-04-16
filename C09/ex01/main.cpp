#include "RPN.hpp"
#include <string>

int main(int argc, char **argv){

	if (argc != 2)
		return 2;
	RPN test;
	try{
		cout << test.solve(argv[1]) << endl;
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
}