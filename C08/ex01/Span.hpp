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
		void			addAllInBetween(int nb1, int nb2);
		int				shortestSpan() const;
		int				longestSpan() const;
		void			print();
		unsigned int	size() const;
	private:
		unsigned int	_size;
		unsigned int	currentSize;
		int				*_arr;
};