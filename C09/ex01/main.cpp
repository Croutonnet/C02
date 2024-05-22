#include "RPN.hpp"
#include <string>

int main(int argc, char **argv){

	if (argc != 2){
		cout << "The program need 1 argument" << endl;
		return 2;
	}
	RPN test;
	try{
		cout << test.solve(argv[1]) << endl;
	}catch(std::exception &e){
		cout << e.what() << endl;
	}
}