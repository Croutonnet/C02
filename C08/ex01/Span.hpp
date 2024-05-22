#pragma once

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::string;
class	Span{
	public:
		Span();
		Span(unsigned int size);
		~Span();
		Span(const Span &inst);
		Span& operator=(const Span &rhs);

		void			addNumber(int nb);
		void			addMultiplesNumbers(std::vector<int> toAdd);
		int				shortestSpan() const;
		int				longestSpan() const;
		void			print();
		unsigned int	size() const;
	private:
		unsigned int	_size;
		unsigned int	currentSize;
		std::vector<int> _vector;
};