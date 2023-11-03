#include "Fixed.hpp"
#include <iostream>

int main( void ) {
	Fixed a(15);
	Fixed b(2);
	
	std::cout << "1 = TRUE, 0 = FALSE" << std::endl << std::endl;
	std::cout << "Comparaison si " << a << " < " << b << " Res: " << (a < b) << std::endl;
	std::cout << "Comparaison si " << a << " > " << b << " Res: " << (a > b) << std::endl;
	std::cout << "Comparaison si " << a << " <= " << b << " Res: " << (a <= b) << std::endl;
	std::cout << "Comparaison si " << a << " >= " << b << " Res: " << (a >= b) << std::endl;
	std::cout << "Comparaison si " << a << " != " << b << " Res: " << (a != b) << std::endl;
	std::cout << "Comparaison si " << a << " == " << b << " Res: " << (a == b) << std::endl << std::endl;

	std::cout << a << " + " << b << " = " << a + b << std::endl;
	std::cout << a << " - " << b << " = " << a - b << std::endl;
	std::cout << a << " * " << b << " = " << a * b << std::endl;
	std::cout << a << " / " << b << " = " << a / b << std::endl << std::endl;

	std::cout << "Avant: " << a << std::endl;
	a++;
	std::cout << "Apres: " << a << std::endl;
	std::cout << "Avant: " << a << std::endl;
	++a;
	std::cout << "Apres: " << a << std::endl;
	std::cout << "Avant: " << a << std::endl;
	a--;
	std::cout << "Apres: " << a << std::endl;
	std::cout << "Avant: " << a << std::endl;
	--a;
	std::cout << "Apres: " << a << std::endl << std::endl;

	std::cout << "min entre: " << a << " et " << b << " = " << Fixed::min(a, b) << std::endl;
	std::cout << "max entre: " << a << " et " << b << " = " << Fixed::max(a, b) << std::endl;

	return 0;
}
