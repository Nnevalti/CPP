#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* Bob = new Bureaucrat("Bob", 2);
	Bureaucrat* Az = new Bureaucrat("Az", 149);

	// No error
	try
	{
		std::cout << *Bob << *Az;
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

	delete Bob;
	delete Az;
}
