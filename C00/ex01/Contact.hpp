#pragma once
#include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		~Contact();
		const std::string &GetFirstName(void) const;
		const std::string &GetLastName(void) const;
		const std::string &GetNickName(void) const;
		const std::string &GetPhoneNumber(void) const;
		const std::string &GetDarkestSecret(void) const;

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};