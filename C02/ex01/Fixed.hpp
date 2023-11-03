#pragma once

#include <iostream>
#include <ostream>

class Fixed{

	private:
		int number;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &inst);
		Fixed(const int value);
		Fixed(const float value);

		Fixed	&operator=(const Fixed &rhs);

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &inst);