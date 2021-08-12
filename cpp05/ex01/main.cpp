#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* Bob = new Bureaucrat("Bob", 2);
	Bureaucrat* Az = new Bureaucrat("Az", 149);
	Form* form1 = new Form("49/3", 20, 20);
	Form* form2 = new Form("Weed legalization", 150, 150);
	Form* form1cpy = form1;
	Form* form2cpy = new Form(*form2);
	// No error
	try
	{
		std::cout << "Bureaucrat:" << std::endl;
		std::cout << *Bob << *Az;
		std::cout << "Form:" << std::endl;
		std::cout << *form1 << *form2;
		std::cout << "Form copy:" << std::endl;
		std::cout << *form1cpy << *form2cpy;
		Bob->signForm(*form1); // fail
		Az->signForm(*form1); // success
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bob->upgrade();
		Az->downgrade();
		Az->signForm(*form2); // success
		std::cout << "Bureaucrat:" << std::endl;
		std::cout << *Bob << *Az;
		std::cout << "Form:" << std::endl;
		std::cout << *form1 << *form2;
		std::cout << "Form copy:" << std::endl;
		std::cout << *form1cpy << *form2cpy;

	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Upgrade exception: Grade too High
	try
	{
		Bob->upgrade();
		std::cout << *Bob;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Downgrade exception: Grade too low
	try
	{
		Az->downgrade();
		std::cout << *Az;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	// Creation exception
	try
	{
		Bureaucrat* test = new Bureaucrat("Test", 0);
		std::cout << *test;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat* test = new Bureaucrat("Test", 151);
		std::cout << *test;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	delete form1;
	delete form2;
	delete form2cpy;
	delete Bob;
	delete Az;
}
