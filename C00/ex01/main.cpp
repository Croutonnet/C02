#include <iostream>
#include "PhoneBook.hpp"
#include "Contact.hpp"

int main (void){
	PhoneBook	book;
	std::string input;
	std::cout << "The prompt is yours¡" << std::endl;
	while (std::cout << "Input: " && std::getline(std::cin, input)){
		if (input == "ADD"){
			std::string firstName, lastName, nickName, phoneNumber, darksecret;
			std::cout << "First Name:	";
			std::getline(std::cin, firstName);
			std::cout << "Last Name:	";
			std::getline(std::cin, lastName);
			std::cout << "Nickname:	";
			std::getline(std::cin, nickName);
			std::cout << "Phone Number:	";
			std::getline(std::cin, phoneNumber);
			std::cout << "Darkest Secret:	";
			std::getline(std::cin, darksecret);
			if (firstName  == "" || lastName == "" || nickName == "" || phoneNumber == "" || darksecret == "")
				std::cout << "Esti de pas beau, mais des vrai input" << std::endl;
			else{
				Contact page(firstName, lastName, nickName, phoneNumber, darksecret);
				book.AddContact(page);
			}
		}
		else if (input == "SEARCH"){
			book.SearchContact();
			std::cout << "Enter the index you want to see:	";
			std::getline(std::cin, input);
			try{
				book.SearchSpecifiedContact(std::stoi(input));
			}
			catch(const std::exception& e){
				std::cout << "Oopsi daisy, t'as fait une erreur, tu devrais recommencer et être meilleur" << std::endl;
			}
		}
		else if (input == "EXIT")
			return (0);
	}
}