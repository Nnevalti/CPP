#include "Intern.hpp"

Form *(*func)(const std::string & target);
typedef struct { std::string form_name; Form *(*func)(const std::string & target);} Form_types;

Intern::Intern()
{
	return ;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(const Intern & src)
{
	(void)src;
	return ;
}

Intern &Intern::operator=(const Intern & src)
{
	return (*this);
}


Form* createShruberryCreationForm(std::string const & target){ return (new ShrubberyCreationForm(target)); }
Form* createRobotomyRequestForm(std::string const & target){ return (new RobotomyRequestForm(target)); }
Form* createPresidentialPardonForm(std::string const & target){ return (new PresidentialPardonForm(target)); }

Form *Intern::makeForm(std::string form_name, std::string target)
{
	Form *form;
	Form_types ft[] =
	{
			{"shruberry creation", &createShruberryCreationForm},
			{"robotomy request", &createRobotomyRequestForm},
			{"presidential pardon", &createPresidentialPardonForm}
	};
	for (int i = 0; i < 3; i++)
	{
		if (ft[i].form_name == form_name)
		{
			form = ft[i].func(target);
			std::cout << "Interns creates " << form->getName() << std::endl;
			return (form);
		}
	}
	std::cout << "404: Form not found, Intern cannot create the form." << std::endl;
	return (NULL);
}
