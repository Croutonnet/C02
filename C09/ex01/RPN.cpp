#include "RPN.hpp"

RPN::RPN(){
	cout << BLUE "Default RPN Constructor Called" RESET << endl;
}

RPN::~RPN(){
	cout << BLUE "Default RPN Destructor Called" RESET << endl;
}

RPN::RPN(const RPN &inst){
	*this = inst;
}

RPN &RPN::operator=(const RPN &rhs){
	if (this != &rhs) {
		patante = rhs.patante;
	}
	return *this;
}

int RPN::solve(string line){
	int i = 0;

	while(line[i]){
		if (std::isdigit(line[i]) == true){
			patante.push(std::stoi(&line[i]));
		}
		if (line[i] == '+'){
			int tempRes = patante.top();
			patante.pop();
			tempRes = tempRes + patante.top();
			patante.pop();
			patante.push(tempRes);
		}else if (line[i] == '-'){
			int tempRes = patante.top();
			patante.pop();
			tempRes = tempRes - patante.top();
			patante.pop();
			patante.push(tempRes);
		}else if (line[i] == '*'){
			int tempRes = patante.top();
			patante.pop();
			tempRes = tempRes * patante.top();
			patante.pop();
			patante.push(tempRes);
		}else if (line[i] == '/'){
			int tempRes = patante.top();
			patante.pop();
			tempRes = tempRes / patante.top();
			patante.pop();
			patante.push(tempRes);
		}
		if (line.find(' ', i) == string::npos)
			break;
		i++;
	}
	return patante.top();
}