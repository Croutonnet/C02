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

		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		Fixed	&operator=(const Fixed &rhs);
		Fixed	operator+(const Fixed &rhs) const;
		Fixed	operator-(const Fixed &rhs) const;
		Fixed	operator*(const Fixed &rhs) const;
		Fixed	operator/(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>(const Fixed &rhs) const;
		bool	operator<=(const Fixed &rhs) const;
		bool	operator>=(const Fixed &rhs) const;
		bool	operator==(const Fixed &rhs) const;
		bool	operator!=(const Fixed &rhs) const;


		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
		static Fixed &min(Fixed &nb1, Fixed &nb2);
		static const Fixed &min(Fixed const &nb1, Fixed const &nb2);
		static Fixed &max(Fixed &nb1, Fixed &nb2);
		static const Fixed &max(Fixed const &nb1, Fixed const &nb2);
};

std::ostream &operator<<(std::ostream &o, Fixed const &inst);