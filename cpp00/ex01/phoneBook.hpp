#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int		nb_contact;

	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void display();
};

#endif
