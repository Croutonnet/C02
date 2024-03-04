#include <cctype>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

bool checkIfSpecial(string input){
	if (input == "-inff")
		return true;
	else if (input == "+inff")
		return true;
	else if (input == "-inf")
		return true;
	else if (input == "+inf")
		return true;
	else if (input == "nan")
		return true;
	else if (input == "nanf")
		return true;
	return false;
}

int main(int argc, char **argv){
	if (argc > 2 || argc < 2){
		return (cout << "Bad arguments" << endl, 1);
	}
	bool flag = checkIfSpecial(argv[1]);
}