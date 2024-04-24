#include "PmergeMe.hpp"
#include <stdexcept>

int main(int argc, char **argv){
	if (argc < 2){
		cout << RED "This programs need at least 1 arguments" RESET << endl;
		return -1;
	}
	std::chrono::steady_clock::time_point timeBefore;
	std::chrono::steady_clock::time_point timeAfter;
	std::chrono::duration<double> timer1;
	std::chrono::duration<double> timer2;
	try {
		PmergeMe pmergeme;
		for (int i = 1; i < argc; i++) {
			pmergeme.putInsideVector(argv[i]);
			pmergeme.putInsideDeque(argv[i]);
		}
		cout << "BEFORE SORT: " << endl;
		pmergeme.printVector();
		timeBefore = std::chrono::steady_clock::now();
		pmergeme.solveWithVector(); //algo
		timeAfter = std::chrono::steady_clock::now();
		timer1 = std::chrono::duration_cast<std::chrono::duration<double> >(timeAfter - timeBefore); //get le time de vector algo
		timeBefore = std::chrono::steady_clock::now();
		pmergeme.solveWithDeque(); //algo
		timeAfter = std::chrono::steady_clock::now();
		timer2 = std::chrono::duration_cast<std::chrono::duration<double> >(timeAfter - timeBefore); //get le time de deque algo
		cout << "AFTER SORT: " << endl;
		pmergeme.printVector();
		pmergeme.printVectorTime(timer1);
		pmergeme.printDequeTime(timer2);
	}catch (std::exception &e){
		cout << RED << e.what() << RESET << endl;
	}
}