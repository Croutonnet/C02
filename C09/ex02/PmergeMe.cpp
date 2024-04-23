#include "PmergeMe.hpp"
#include <cstddef>
#include <exception>
#include <vector>

PmergeMe::PmergeMe(){
	cout << BLUE "Default PmergeMe Constructor Called" RESET << endl;
}

PmergeMe::~PmergeMe(){
	cout << BLUE "Default PmergeMe Destructor Called" RESET << endl;
}

PmergeMe::PmergeMe(const PmergeMe &inst){
	*this = inst;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs){
	if (this != &rhs) {

	}
	return *this;
}

void	PmergeMe::putInsideVector(string sequence){
	int i = 0;
	while(sequence[i]){
		_vector.push_back(std::stoi(&sequence[i]));
		if (sequence.find(" ", i) == string::npos)
			return ;
		while (sequence[i] && std::isspace(sequence[i]) == true)
			i++;
		if (sequence.find(" ") == string::npos)
			return ;
		i = sequence.find(" ", i) + 1;
	}
}

void	PmergeMe::putInsideDeque(string sequence){
	(void)sequence;
}

void	PmergeMe::printVector(){
	for (size_t i = 0; i < _vector.size(); i++){
		cout << _vector[i] << " ";
	}
	cout << endl;
}

void	PmergeMe::sortVec(int start, int end, int half){
	if (end - start > half){
		int newHalf = (start + end) / 2;
		sortVec(start, newHalf, half);
		sortVec(newHalf + 1, end, half);
	}else {
	}
}

void	PmergeMe::solveWithVector(){
	printVector();
	sortVec(0, _vector.size() - 1, _vector.size() / 2);
}

