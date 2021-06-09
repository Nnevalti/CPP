#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat* Bob = new Bureaucrat("Bob", 1);
	std::cout << *Bob;
	Bureaucrat* Az = new Bureaucrat("Az", 42);
	std::cout << *Az;

	Form *shrub = new ShrubberyCreationForm("maison");
	std::cout << *shrub << std::endl;
	shrub->beSigned(*Bob);
	shrub->execute(*Az);

	Form *president = new PresidentialPardonForm("Excuse him");
	std::cout << *president << std::endl;
	// Bob->si(*president);
	president->execute(*Bob);

	Form *robot = new RobotomyRequestForm("R2D2");
	std::cout << *robot << std::endl;
	robot->beSigned(*Bob);
	robot->execute(*Az);
	Az->executeForm(*robot);
	Az->executeForm(*robot);

	try
	{
		Bob->upgrade();
		Az->downgrade();
		std::cout << "Bureaucrat:" << std::endl;
		std::cout << *Bob << *Az;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	delete Bob;
	delete Az;
}
