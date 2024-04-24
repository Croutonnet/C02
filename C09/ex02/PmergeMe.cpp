#include "PmergeMe.hpp"
#include <chrono>
#include <cstddef>
#include <deque>
#include <iomanip>
#include <stdexcept>
#include <string>
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

//---------------------------------------------VECTOR----------------------------------------------------------

void	PmergeMe::putInsideVector(string sequence){
	int i = 0;
	while(sequence[i]){
		if (std::stoi(&sequence[i]) < 0)
			throw std::invalid_argument("This program only takes postive integer");
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

void	PmergeMe::insertVec(int start, int newHalf){
	for(int i = start; i < newHalf; i++){
		int temp = _vector[i + 1];
		int j = i + 1;
		while(j > start && _vector[j - 1] > temp){
			_vector[j] = _vector[j - 1];
			j--;
		}
		_vector[j] = temp;
	}
}

void	PmergeMe::mergeVec(int start, int newHalf, int end){
	int nb1 = newHalf - start + 1;
	int nb2 = end - newHalf;
	std::vector<int> leftHalf(_vector.begin()+ start, _vector.begin() + newHalf + 1);
	std::vector<int> rightHalf(_vector.begin() + newHalf + 1, _vector.begin() + end + 1);
	int indexLeft = 0;
	int indexRight = 0;
	for (int i = start; i < end - start + 1; i++){
		if (indexRight == nb2){
			_vector[i] = leftHalf[indexLeft];
			indexLeft++;
		}else if(indexLeft == nb1){
			_vector[i] = rightHalf[indexRight];
			indexRight++;
		}else if(rightHalf[indexRight] > leftHalf[indexLeft]){
			_vector[i] = leftHalf[indexLeft];
			indexLeft++;
		}else{
			_vector[i] = rightHalf[indexRight];
			indexRight++;
		}
	}
}

void	PmergeMe::sortVec(int start, int end, int half){
	if (end - start > half){
		int newHalf = (start + end) / 2;
		sortVec(start, newHalf, half);
		sortVec(newHalf + 1, end, half);
		mergeVec(start, newHalf, end);
	}else {
		insertVec(start, end);
	}
}

void	PmergeMe::solveWithVector(){
	sortVec(0, _vector.size() - 1, _vector.size() / 2);
}

//---------------------------------------------DEQUE----------------------------------------------------------

void	PmergeMe::putInsideDeque(string sequence){
	int i = 0;
	while(sequence[i]){
		if (std::stoi(&sequence[i]) < 0)
			throw std::invalid_argument("This program only takes postive integer");
		_deque.push_back(std::stoi(&sequence[i]));
		if (sequence.find(" ", i) == string::npos)
			return ;
		while (sequence[i] && std::isspace(sequence[i]) == true)
			i++;
		if (sequence.find(" ") == string::npos)
			return ;
		i = sequence.find(" ", i) + 1;
	}
}

void	PmergeMe::insertDeque(int start, int newHalf) {
	for (int i = start; i < newHalf; i++) {
		int temp = _deque[i + 1];
		int j = i + 1;
		while (j > start && _deque[j - 1] > temp) {
			_deque[j] = _deque[j - 1];
			j--;
		}
		_deque[j] = temp;
	}
}

void	PmergeMe::mergeDeque(int start, int newHalf, int end){
	int nb1 = newHalf - start + 1;
	int nb2 = end - newHalf;
	std::deque<int> leftHalf(_deque.begin()+ start, _deque.begin() + newHalf + 1);
	std::deque<int> rightHalf(_deque.begin() + newHalf + 1, _deque.begin() + end + 1);
	int indexLeft = 0;
	int indexRight = 0;
	for (int i = start; i < end - start + 1; i++){
		if (indexRight == nb2){
			_deque[i] = leftHalf[indexLeft];
			indexLeft++;
		}else if(indexLeft == nb1){
			_deque[i] = rightHalf[indexRight];
			indexRight++;
		}else if(rightHalf[indexRight] > leftHalf[indexLeft]){
			_deque[i] = leftHalf[indexLeft];
			indexLeft++;
		}else{
			_deque[i] = rightHalf[indexRight];
			indexRight++;
		}
	}
}

void	PmergeMe::sortDeque(int start, int end, int half){
	if (end - start > half){
		int newHalf = (start + end) / 2;
		sortDeque(start, newHalf, half);
		sortDeque(newHalf + 1, end, half);
		mergeDeque(start, newHalf, end);
	}else {
		insertDeque(start, end);
	}
}

void	PmergeMe::solveWithDeque(){
	sortDeque(0, _deque.size() - 1, _deque.size() / 2);
}

//---------------------------------------------------------------OTHER--------------------------------------------------

void	PmergeMe::printVector(){
	for (size_t i = 0; i < _vector.size(); i++){
		if (i > 10){
			cout << "[...]" << endl;
			return ;
		}
		cout << _vector[i] << " ";
	}
	cout << endl;
}

void	PmergeMe::printDeque(){
	for (size_t i = 0; i < _deque.size(); i++){
		if (i > 10){
			cout << "[...]" << endl;
			return ;
		}
		cout << _deque[i] << " ";
	}
	cout << endl;
}

void	PmergeMe::printVectorTime(std::chrono::duration<double> time){
	cout << "Time to process a range of " << _vector.size() << " element with std::vector : " << std::fixed << std::setprecision(5) << time.count() << " us" << endl;
}
void	PmergeMe::printDequeTime(std::chrono::duration<double> time){
	cout << "Time to process a range of " << _deque.size() << " element with std::deque : " << std::fixed << std::setprecision(5) << time.count() << " us" << endl;

}
