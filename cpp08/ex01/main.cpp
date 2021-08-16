#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print();
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.addNumber(42);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	Span sp2 = Span(10000);
	sp2.createRange(0, 10000);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;

	Span sp_short = Span(5);
	sp_short.addNumber(5);
	sp_short.addNumber(3);
	sp_short.addNumber(17);
	sp_short.addNumber(-8925);
	sp_short.addNumber(11);

	std::cout << sp_short.shortestSpan() << std::endl;

	Span sp_short_hard = Span(2);
	sp_short_hard.addNumber(2147483647);
	sp_short_hard.addNumber(-2147483648);

	std::cout << sp_short_hard.shortestSpan() << std::endl;

	Span sp_empty = Span(80);

	try
	{
		std::cout << sp_empty.shortestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cout << e.what() <<  std::endl;
	}

	sp_empty.addNumber(5);

	try
	{
		std::cout << sp_empty.longestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cout << e.what() <<  std::endl;
	}

	Span sp_long = Span(4);
	sp_long.addNumber(8);
	sp_long.addNumber(-3);
	sp_long.addNumber(80);
	sp_long.addNumber(-8);

	try
	{
		std::cout << sp_long.longestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cout << e.what() <<  std::endl;
	}

	Span sp_long_hard = Span(4);
	sp_long_hard.addNumber(2147483647);
	sp_long_hard.addNumber(-2147483648);

	try
	{
		std::cout << sp_long_hard.longestSpan() << std::endl;
	}
		catch(const std::exception& e)
	{
		std::cerr << "Error : " << e.what() <<  std::endl;
	}
}
