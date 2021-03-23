#include "contact.hpp"

std::string Contact::title_info[11] = {
  "First Name",
  "Last Name",
  "Nickname",
  "Login",
  "Postal Address",
  "Email address",
  "Phone Number",
  "Birthday date",
  "Favorite meal",
  "Underwear color",
  "Darkest secret"
};

Contact::Contact(){}

Contact::~Contact(){}

void	Contact::set_infos()
{
	std::cout << "Please enter contact informations:" << std::endl;
	for (int i = 0; i < 11; i++)
	{
		std::cout << Contact::title_info[i] << ": ";
		std::getline(std::cin, contact_info[i]);
	}
	std::cout << "Contact " << contact_info[0] << " " << contact_info[1] << " added.\n" << std::endl;
}

void	Contact::display_contact_preview(int i)
{
	std::cout << "|";
	std::cout << std::setw(10) << i;
	for (int i = 0; i < 3; i++)
	{
		std::cout << "|";
		if (contact_info[i].length() > 9)
			std::cout << std::setw(9) << contact_info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << contact_info[i];
	}
	std::cout << "|";
	std::cout << std::endl;
}

void	Contact::display_contact()
{
	for (int i = 0; i < 11; i++)
		std::cout << title_info[i] << ": " << contact_info[i] << std::endl;
}
