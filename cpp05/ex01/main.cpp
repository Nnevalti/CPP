#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat* Bob = new Bureaucrat("Bob", 2);
	Bureaucrat* Az = new Bureaucrat("Az", 149);
	Form* form1 = new Form("49/3", 20, 20);
	Form* form2 = new Form("Weed legalization", 150, 150);

	// No error
	try
	{
		std::cout << *Bob << *Az;
		std::cout << *form1 << *form2;
		form1->signForm(*Bob);
		form1->signForm(*Az);
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bob->upgrade();
		Az->downgrade();
		std::cout << *Bob;
		std::cout << *Az;
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
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat* test = new Bureaucrat("Test", 151);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	delete Bob;
	delete Az;
}
