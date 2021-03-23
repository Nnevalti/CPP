#include <iostream>
#include "contact.hpp"
#include "phoneBook.hpp"

int		main(void)
{
	Contact		contact;
	PhoneBook	phonebook;
	std::string	buff;

	std::cout << "WELCOME TO YOUR PHONEBOOK\n" << std::endl;
	while (42)
	{
		std::cout << "You are on the PhoneBook homepage." << std::endl;
		std::cout <<"Please type one of the following command:" << std::endl;
		std::cout << "ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, buff);
		if (buff == "EXIT")
			return 0;
		else if (buff == "ADD")
			phonebook.add();
		else if (buff == "SEARCH")
			phonebook.search();
		else
			std::cout << "Wrong command. Try ADD, SEARCH or EXIT" << std::endl;
		std::cout << std::endl;
	}
}
