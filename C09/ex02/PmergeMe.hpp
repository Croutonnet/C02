#pragma once

#include <deque>
#include <iostream>
#include <vector>

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

class	PmergeMe{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &inst);
		PmergeMe& operator=(const PmergeMe &rhs);
		void	printVector();
		void	sortVec(int start, int end, int half);
		void	solveWithVector(void);
		void	putInsideVector(string sequence);

		void	printDeque();
		void	solveWithDeque(void);
		void	putInsideDeque(string sequence);
	private:
		std::vector<int>	_vector;
		std::deque<int>		_deque;
};