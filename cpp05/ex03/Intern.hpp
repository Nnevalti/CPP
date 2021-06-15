#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		//Coplien
		Intern();
		~Intern();
		Intern(const Intern & src);
		Intern &operator=(const Intern & src);
		Form *makeForm(std::string form_name, std::string target);
};

#endif
