#pragma once

#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::string;

#define RED		"\033[31m"
#define GREEN	"\033[32m"
#define BLUE	"\033[34m"
#define YELLOW	"\033[33m"
#define BLACK	"\033[30m"
#define WHITE	"\033[37m"
#define RESET	"\033[0m"
#define PURPLE	"\033[38;5;165m"

class	RPN{
	public:
		RPN();
		~RPN();
		RPN(const RPN &inst);
		RPN& operator=(const RPN &rhs);
		int solve(string line);
	private:
		std::stack<int> patante;
};