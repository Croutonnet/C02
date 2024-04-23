#include "RPN.hpp"
#include <cctype>
#include <stdexcept>

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
		stack = rhs.stack;
	}
	return *this;
}

void	RPN::calculate(char op){
	if (stack.size() == 1)
		throw std::invalid_argument("THe program needs 2 numbers to do an operation");
	int tempRes = stack.top();
	stack.pop();
	if (op == '+')
		tempRes = stack.top() + tempRes;
	else if (op == '-')
		tempRes = stack.top() - tempRes;
	else if (op == '*')
		tempRes = stack.top() * tempRes;
	else if (op == '/'){
		if (tempRes == 0)
			throw std::invalid_argument("You can't dived something by 0, that's wack");
		tempRes = stack.top() / tempRes;
	}
	stack.pop();
	stack.push(tempRes);
}

int RPN::solve(string line){
	int i = 0;

	while(line[i]){
		if (std::isdigit(line[i]) == true){
			if (std::stoi(&line[i]) > 9 || std::stoi(&line[i]) < 0)
				throw std::invalid_argument("The string accept only digit, nothing beyond 9");
			stack.push(std::stoi(&line[i]));
		}else if (line[i] == '+' || line[i] == '-' || line[i] == '*' || line[i] == '/'){
			calculate(line[i]);
		}else if (std::isalpha(line[i]) == true || std::isspace(line[i]) == false){
			throw std::invalid_argument("The string must only contains number and operators");
		}
		i++;
	}
	return stack.top();
}