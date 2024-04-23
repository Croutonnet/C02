#include "PmergeMe.hpp"
#include <stdexcept>

int main(int argc, char **argv){
	if (argc < 2){
		cout << "This programs need at least 1 arguments" << endl;
		return -1;
	}
	try {
		PmergeMe vector;
		PmergeMe deque;
		for (int i = 1; i < argc; i++) {
			vector.putInsideVector(argv[i]);
		}
		vector.solveWithVector();
	}catch (std::exception &e){
		cout << e.what() << endl;
	}
}