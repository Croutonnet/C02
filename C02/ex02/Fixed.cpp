#include "Fixed.hpp"
#include <cmath>
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
	if (this != &rhs) {
		this->number = rhs.number;
	}
	return *this;
}

int Fixed::getRawBits() const{
	return this->number;
}

void Fixed::setRawBits(int const raw){
	this->number = raw;
}

float Fixed::toFloat() const{
	return ((float)this->number / (float)(1 << this->bits));
}

int Fixed::toInt() const{
	return ((int)this->number >> this->bits);
}

bool Fixed::operator<(const Fixed &rhs) const{
	return (this->number < rhs.getRawBits());
}

bool Fixed::operator>(const Fixed &rhs) const{
	return (this->number > rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const{
	return (this->number <= rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const{
	return (this->number >= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const{
	return (this->number == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const{
	return (this->number != rhs.getRawBits());
}

Fixed Fixed::operator+(const Fixed &rhs) const{
	Fixed result;

	result.setRawBits(this->number + rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator-(const Fixed &rhs) const{
	Fixed result;

	result.setRawBits(this->number - rhs.getRawBits());
	return (result);
}

Fixed Fixed::operator*(const Fixed &rhs) const{
	Fixed result;

	result.setRawBits((this->number * rhs.getRawBits()) >> this->bits);
	return (result);
}

Fixed Fixed::operator/(const Fixed &rhs) const{
	Fixed result;

	result.setRawBits(this->number * (1 << this->bits) / rhs.getRawBits());
	return (result);
}

Fixed &Fixed::operator++(){
	++this->number;
	return *this;
}

Fixed Fixed::operator++(int){
	Fixed result(*this);
	++this->number;
	return result;
}

Fixed &Fixed::operator--(){
	--this->number;
	return *this;
}

Fixed Fixed::operator--(int){
	Fixed result(*this);
	--this->number;
	return result;
}

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2){
	return ((nb1 < nb2) ? nb1 : nb2);
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2){
	return (nb1 > nb2) ? nb1 : nb2;
}

const Fixed &Fixed::min(Fixed const &nb1, Fixed const &nb2){
	return (nb1 < nb2) ? nb1 : nb2;
}

const Fixed &Fixed::max(Fixed const &nb1, Fixed const &nb2){
	return (nb1 > nb2) ? nb1 : nb2;
}

std::ostream &operator<<(std::ostream &o, Fixed const &inst){
	o << inst.toFloat();
	return o;
}