#include "Span.hpp"
#include <climits>
#include <cmath>
#include <exception>

Span::Span(): _size(0){
	// cout << "Default Span Constructor Called" << endl;
	currentSize = 0;
}

Span::Span(unsigned int size): _size(size){
	// cout << "Default Span Constructor Called" << endl;
	currentSize = 0;
	_arr = new int[size];
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
		_arr = rhs._arr;
	}
	return *this;
}

void	Span::addNumber(int nb){
	if (currentSize == _size)
		throw std::exception();
	_arr[currentSize] = nb;
	currentSize++;
}

void	Span::print(){
	for (unsigned int i = 0; i < _size; i++) {
		cout << _arr[i] << "	";
	}
	cout << endl;
}

unsigned int Span::size() const{
	return _size;
}

int Span::shortestSpan() const{
	if (_size == 0 || _size == 1)
		throw std::exception();
	unsigned int i = 0;
	bool		flag = false;
	unsigned int j;
	int small = INT_MAX;
	while (i < _size){
		j = 0;
		while (j < _size){
			int sus = abs(_arr[i] - _arr[j]);
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
	if (_size == 0 || _size == 1)
		throw std::exception();
	unsigned int i = 0;
	bool		flag = false;
	unsigned int j;
	int big = 0;
	while (i < _size){
		j = 0;
		while (j < _size){
			int sus = abs(_arr[i] - _arr[j]);
			if (sus > big && sus != 0){
				big = sus;
				flag = true;
			}
			j++;
		}
		i++;
	}
	if (flag == false)
		return 0;
	return big;
}