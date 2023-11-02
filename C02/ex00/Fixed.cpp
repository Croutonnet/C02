#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(): number(0){
	std::cout << "Default Fixed constructor " << std::endl;
}

Fixed::Fixed(const Fixed &inst){
	std::cout << "Copy Fixed constructor " << std::endl;
	*this = inst;
}

Fixed::~Fixed(){
	std::cout << "Fixed destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs){
	std::cout << "Fixed operator = overide" << std::endl;
	if (this != &rhs) {
		this->number = rhs.number;
	}
	return *this;
}

int Fixed::getRawBits() const{

}

void Fixed::setgetRawBits(int const raw){

}