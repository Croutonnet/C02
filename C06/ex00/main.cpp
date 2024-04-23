#include <climits>
#include <cstdlib>
#include <exception>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

using std::string;
using std::cout;
using std::endl;

bool	checkIfSpecial(string input){
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

void	convertSpecial(string input){
	cout << "char: impossible" << endl;
	cout << "int: impossible" << endl;
	if (input == "-inff"){
		cout << "float: -inff" << endl;
		cout << "double: -inf" << endl;
	}else if (input == "+inff"){
		cout << "float: +inff" << endl;
		cout << "double: +inf" << endl;
	}else if (input == "-inf"){
		cout << "float: -inff" << endl;
		cout << "double: -inf" << endl;
	}else if (input == "+inf"){
		cout << "float: +inff" << endl;
		cout << "double: +inf" << endl;
	}else if (input == "nanf"){
		cout << "float: nanf" << endl;
		cout << "double: nan" << endl;
	}else if (input == "nan"){
		cout << "float: nanf" << endl;
		cout << "double: nan" << endl;
	}
}

//--------------------------------FLOAT--------------------------

bool	checkIfFloat(string input){
	if (input.length() < 4){
		return false;
	}
	if (input[input.find(".") + 1] == 'f')
		return false;
	if (input.find("f") == string::npos || input.find(".") == string::npos)
		return false;
	if (input.find_first_not_of("0123456789.f-") != string::npos)
		return false;
	return true;
}

void	floatToChar(float nb){
	cout << "char: ";
	if (nb < 32 || nb > 126){
		cout << "Non displayable" << endl;
		return ;
	}
	cout << "'" << static_cast<char>(nb) << "'" << endl;
}

void	floatToInt(float nb){
	cout << "int: ";
	try {
		std::stoi(std::to_string(nb));
	} catch(std::exception &e){
		cout << "impossible" << endl;
		return ;
	}
	cout << static_cast<int>(nb) << endl;
}

void	floatToDouble(float nb, string input){
	cout << "double: ";
	if (nb > std::numeric_limits<double>::max() || nb < -std::numeric_limits<double>::max()){
		cout << "impossible" << endl;
		return ;
	}
	cout << std::fixed << std::setprecision(input.find("f") - input.find(".") - 1) << static_cast<double>(nb) << endl;
}

void	convertFloat(float nb, string input){
	floatToChar(nb);
	floatToInt(nb);
	cout << std::fixed << std::setprecision(input.find("f") - input.find(".") - 1) << "float: " << nb << "f" << endl;
	floatToDouble(nb, input);
}

//--------------------------------DOUBLE----------------

bool	checkIfDouble(string input){
	if (input.length() < 3)
		return false;
	if (input.find("f") != string::npos || input.find(".") == string::npos)
		return false;
	if (input.find_first_not_of("0123456789.-") != string::npos)
		return false;
	return true;
}

void	doubleToChar(double nb){
	cout << "char: ";
	if (nb < 32 || nb > 126){
		cout << "Non displayable" << endl;
		return ;
	}
	cout << "'" << static_cast<char>(nb) << "'" << endl;
}

void	doubleToInt(double nb){
	cout << "int: ";
	if (nb > INT_MAX || nb < INT_MIN){
		cout << "impossible" << endl;
		return ;
	}
	cout << static_cast<int>(nb) << endl;
}

void	doubleToFloat(double nb, string input){
	cout << "float: ";
	if (nb > std::numeric_limits<float>::max() || nb < -std::numeric_limits<float>::max()){
		cout << "impossible" << endl;
		return ;
	}
	cout << std::fixed << std::setprecision(input.length() - input.find(".") - 1) << static_cast<double>(nb) << "f" << endl;
}

void	convertDouble(double nb, string input){
	doubleToChar(nb);
	doubleToInt(nb);
	doubleToFloat(nb, input);
	cout << std::fixed << std::setprecision(input.length() - input.find(".") - 1) << "double: " << static_cast<double>(nb) << endl;
}

//-------------------------------------INTEGER-----------------------

bool	checkIfInt(string input){
	if (input.length() == 0)
		return false;
	if (input.find_first_not_of("0123456789-") != string::npos)
		return false;
	return true;
}

void	intToChar(int nb){
		cout << "char: ";
	if (nb < 32 || nb > 126){
		cout << "Non displayable" << endl;
		return ;
	}
	cout << "'" << static_cast<char>(nb) << "'" << endl;
}
void	intToFloat(int nb){
	cout << "float: " << nb << ".0f" << endl;
}

void	intToDouble(int nb){
	cout << "double: " << nb << ".0" << endl;
}

void convertInt(int nb){
	intToChar(nb);
	cout << "int: " << nb << endl;
	intToFloat(nb);
	intToDouble(nb);
}

//----------------------------------CHARACTER-------------------------

bool	checkIfChar(string input){
	if (input.length() != 1)
		return false;
	return true;
}

void	charToInt(char c){
	cout << "int : " << static_cast<int>(c) << endl;
}

void	charToFloat(char c){
	cout << "float : " << static_cast<float>(c) << ".0f" << endl;
}

void	charToDouble(char c){
	cout << "double : " << static_cast<double>(c) << ".0" << endl;
}

void	convertChar(char c){
	cout << "char: '" << c << "'" << endl;
	charToInt(c);
	charToFloat(c);
	charToDouble(c);
}

//----------------------------------MAIN---------------------

int main(int argc, char **argv){
	if (argc > 2 || argc < 2){
		return (cout << "Bad arguments" << endl, 1);
	}
	if (checkIfSpecial(argv[1]) == true){
		convertSpecial(argv[1]);
		return (0);
	}
	else if (checkIfFloat(argv[1]) == true){
		float resFloat;
		try{
			resFloat = std::atof(argv[1]);
		}catch(std::exception &e){
			cout << "Float too big" << endl;
			return (1);
		}
		convertFloat(resFloat, argv[1]);
		return (0);
	}
	else if (checkIfDouble(argv[1]) == true){
		double resDouble;
		try{
			resDouble = std::stod(argv[1]);
		}catch(std::exception &e){
			cout << "Double is too big" << endl;
			return (1);
		}
		convertDouble(resDouble, argv[1]);
		return (0);
	}
	else if (checkIfInt(argv[1]) == true){
		int resInt;
		try{
			resInt = std::stoi(argv[1]);
		}catch(std::exception &e){
			cout << "Int too big" << endl;
			return (1);
		}
		convertInt(resInt);
		return (0);
	}
	else if (checkIfChar(argv[1]) == true){
		convertChar(argv[1][0]);
		return (0);
	}
	else
		cout << "Invalid arguments" << endl;
}