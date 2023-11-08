#include "Fixed.hpp"
#include <ostream>

Fixed::Fixed(): number(0){
	std::cout << "Default Fixed constructor " << std::endl;
}

Fixed::Fixed(const Fixed &inst){
	std::cout << "Copy Fixed constructor " << std::endl;
	*this = inst;
}

Fixed::Fixed(const int value){
	this->number = value * (1 << this->bits);
}

Fixed::Fixed(const float value){
	this->number = value * (1 << this->bits);
}

Fixed::~Fixed(){
	std::cout << "Fixed destructor" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &rhs){
	std::cout << "Operator = Called" << std::endl;
	if (this != &rhs) {
		this->number = rhs.number;
	}
	return *this;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits called" << std::endl;
	return this->number;
}

void Fixed::setRawBits(int const raw){
	std::cout << "setRawBits called" << std::endl;
	this->number = raw;
}

float Fixed::toFloat() const{
	return ((float)this->number / (float)(1 << this->bits));
}

int Fixed::toInt() const{
	return ((int)this->number >> this->bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &inst){
	o << inst.toFloat();
	return o;
}