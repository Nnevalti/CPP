#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat* Bob = new Bureaucrat("Bob", 1);
	Bureaucrat* Az = new Bureaucrat("Az", 42);
	std::cout << *Bob << *Az << std::endl;

	Form *shrub = new ShrubberyCreationForm("Maison");
	std::cout << *shrub;
	try
	{
		shrub->beSigned(*Bob);
		shrub->execute(*Az);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Form *president = new PresidentialPardonForm("Un innocent");
	std::cout << std::endl << *president;
	try
	{
		Bob->signForm(*president);
		Bob->executeForm(*president);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	Form *robot = new RobotomyRequestForm("R2D2");
	std::cout << std::endl << *robot;
	try
	{
		Bob->signForm(*robot);
		// robot->beSigned(*Bob);
		// robot->execute(*Az);
		Az->executeForm(*robot);
		Az->executeForm(*robot);
		Az->executeForm(*robot);
	}
	catch(std::exception & e)
	{
		std::cout << e.what() << "exception";
	}

	// try
	// {
	// 	Bob->upgrade();
	// 	Az->downgrade();
	// 	std::cout << "Bureaucrat:" << std::endl;
	// 	std::cout << *Bob << *Az;
	// }
	// catch (std::exception & e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	delete Bob;
	delete Az;
}
