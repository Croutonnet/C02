#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): index(0), nb_contact(0){
	std::cout << "Constructor called" << std::endl;
}

PhoneBook::~PhoneBook(){
	std::cout << "Destructor called" << std::endl;
}

void PhoneBook::AddContact(Contact contact){
	if (this->nb_contact == MAX_CONTACT && this->index == MAX_CONTACT)
		this->index = 0;
	this->pages[this->index] = contact;
	this->index++;
	if (this->nb_contact < MAX_CONTACT)
		this->nb_contact = this->index;
}

static std::string RapetisseMoi(std::string str){
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}

void PhoneBook::SearchContact(){
	for (int i = 0; i < this->nb_contact; i++){
		std::cout << std::setw(10) << std::right << i + 1;
		std::cout << "|";
		std::cout << std::setw(10) << std::right << RapetisseMoi(this->pages[i].GetFirstName());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << RapetisseMoi(this->pages[i].GetLastName());
		std::cout << "|";
		std::cout << std::setw(10) << std::right << RapetisseMoi(this->pages[i].GetNickName());
		std::cout << "|";
		std::cout << std::endl;
	}
}

void PhoneBook::SearchSpecifiedContact(int index){
	if (index < 1 || index > this->nb_contact)
		std::cout << "Index rechercher est non-existant" << std::endl;
	else{
		std::cout << std::right << "First Name:	" << this->pages[index - 1].GetFirstName() << std::endl;
		std::cout << std::right << "Last Name:	" << this->pages[index - 1].GetLastName() << std::endl;
		std::cout << std::right << "NickName:	" << this->pages[index - 1].GetNickName() << std::endl;
		std::cout << std::right << "PhoneNumber:	" << this->pages[index - 1].GetPhoneNumber() << std::endl;
		std::cout << std::right << "Darkest Secret:	" << this->pages[index - 1].GetDarkestSecret() << std::endl;
	}
}