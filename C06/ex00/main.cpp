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

bool	checkIfFloat(string input){
	if (input.find("f") == string::npos)
		return false;
	return true;
}

bool	checkIfDouble(string input){
	
	return true;
}

bool	checkIfInt(string input){
	
	return true;
}

int main(int argc, char **argv){
	if (argc > 2 || argc < 2){
		return (cout << "Bad arguments" << endl, 1);
	}
	if (checkIfSpecial(argv[1]) == true){
		// convertSpecial();
		return (0);
	}
	if (checkIfFloat(argv[1]) == true){
		// convertFloat();
		return (0);
	}
	if (checkIfDouble(argv[1]) == true){
		// convertDouble();
		return (0);
	}
	if (checkIfInt(argv[1]) == true){
		// convertInt();
		return (0);
	}
	else{
		// convertChar();
		return (0);
	}
}