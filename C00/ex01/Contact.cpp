#include "Contact.hpp"

Contact::Contact(){
	std::cout << "Constructor called" << std::endl;
}

Contact::Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	this->firstName = fn;
	this->lastName = ln;
	this->nickName = nn;
	this->phoneNumber = pn;
	this->darkestSecret = ds;
}

Contact::~Contact(){
	std:: cout << "Destructor called" << std::endl;
}

const std::string Contact::GetFirstName(void){
	return (this->firstName);
}

const std::string Contact::GetLastName(void){
	return (this->lastName);
}
const std::string Contact::GetNickName(void){
	return (this->nickName);
}
const std::string Contact::GetPhoneNumber(void){
	return (this->phoneNumber);
}
const std::string Contact::GetDarkestSecret(void){
	return (this->darkestSecret);
}