#include "Span.hpp"
#include <climits>
#include <cmath>
#include <exception>
#include <stdexcept>
#include <vector>

Span::Span(): _size(0){
	// cout << "Default Span Constructor Called" << endl;
	currentSize = 0;
}

Span::Span(unsigned int size): _size(size){
	// cout << "Default Span Constructor Called" << endl;
	currentSize = 0;
}

Span::~Span(){
	// cout << "Default Span Destructor Called" << endl;
}

Span::Span(const Span &inst){
	*this = inst;
}

Span &Span::operator=(const Span &rhs){
	if (this != &rhs){
		if (_size != rhs.size())
			throw std::exception();
		_size = rhs.size();
		_vector = rhs._vector;
	}
	return *this;
}

void	Span::addNumber(int nb){
	if (currentSize == _size)
		throw std::out_of_range("The array is full, you can't add more number");
	_vector.push_back(nb);
	currentSize++;
}

void	Span::print(){
	for (unsigned int i = 0; i < _size; i++) {
		cout << _vector[i] << "	";
	}
	cout << endl;
}

unsigned int Span::size() const{
	return _size;
}

int Span::shortestSpan() const{
	if (currentSize == 0 || currentSize == 1)
		throw std::out_of_range("The array is too smalls for a span");
	unsigned int i = 0;
	bool		flag = false;
	unsigned int j;
	int small = INT_MAX;
	while (i < _size){
		j = 0;
		while (j < _size){
			int sus = abs(_vector[i] - _vector[j]);
			if (sus < small && sus != 0){
				small = sus;
				flag = true;
			}
			j++;
		}
		i++;
	}
	if (flag == false)
		return 0;
	return small;
}

int Span::longestSpan() const{
	if (currentSize == 0 || currentSize == 1)
		throw std::out_of_range("The array is too small for a span");
	std::vector<int> sortedVector = _vector;
	std::sort(sortedVector.begin(), sortedVector.end());
	return (std::abs(*(sortedVector.end() - 1) - *(sortedVector.begin())));
}

void	Span::addMultiplesNumbers(std::vector<int> toAdd){
	if (toAdd.size() > _size)
		throw std::invalid_argument("The vector toAdd is to big to fit inside the Span");
	_vector.insert(_vector.begin(), toAdd.begin(), toAdd.end());
	currentSize = _vector.size();
}