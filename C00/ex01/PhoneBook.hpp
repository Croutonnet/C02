#pragma once
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

#define MAX_CONTACT 8

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void AddContact(Contact contact);
		void SearchContact();
		void SearchSpecifiedContact(int index);

	private:
		Contact pages[MAX_CONTACT];
		int	nb_contact;
		int	index;
};