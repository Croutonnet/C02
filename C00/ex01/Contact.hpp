#pragma once
#include <iostream>

class Contact
{
	public:
		Contact();
		Contact(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
		~Contact();
		const std::string GetFirstName(void);
		const std::string GetLastName(void);
		const std::string GetNickName(void);
		const std::string GetPhoneNumber(void);
		const std::string GetDarkestSecret(void);

	private:
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
};