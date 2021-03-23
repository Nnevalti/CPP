#include "phoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	nb_contact = 0;
}

PhoneBook::~PhoneBook(){}

void	PhoneBook::add()
{
	std::string	answer;

	if (nb_contact == 8)
		std::cout << "The contact list is full. Returning to the homepage !" << std::endl;
	else
	{
		contact[nb_contact].set_infos();
		nb_contact++;
	}
}

void	PhoneBook::search()
{
	int index;
	if (nb_contact == 0)
	{
		std::cout << "You have no contact yet !" << std::endl;
		return ;
	}
	std::cout << "My PhoneBook:" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "INDEX";
	std::cout << "|";
	std::cout << std::setw(10) << "FIRST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "LAST NAME";
	std::cout << "|";
	std::cout << std::setw(10) << "LOGIN";
	std::cout << "|";
	std::cout << std::endl;
	for (int i = 0; i < nb_contact; i++)
		contact[i].display_contact_preview(i);
	std::cout << "Enter the contact index you want to see:";
	while (!(std::cin >> index) || (index < 0 || index >= nb_contact))
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "Invalid index, please type a valid one:";
	}
	std::cin.ignore(1000, '\n');
	contact[index].display_contact();
}
