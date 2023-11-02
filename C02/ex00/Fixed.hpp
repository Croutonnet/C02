#pragma once

class Fixed{

	private:
		int number;
		static const int bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &inst);
		Fixed	&operator=(const Fixed &rhs);
		int	getRawBits(void) const;
		void	setgetRawBits(int const raw);
};