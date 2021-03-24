#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	public:
		Contact();
		~Contact();
		void set_infos();
		void display_contact_preview(int i);
		void display_contact();

	private:
		static std::string	title_info[11];
		std::string			contact_info[11];

};

#endif
