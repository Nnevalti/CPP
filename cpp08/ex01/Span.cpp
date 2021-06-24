#include "Span.hpp"

Span::Span(unsigned int n): _n(n) {}

Span::Span(const Span &src)
{
	*this = src;
}

Span& Span::operator=(const Span &src)
{
	if (this == &src)
		return *this;
	this->_n = src._n;
	this->_s = src._s;
	return (*this);
}

Span::~Span(){}

void Span::addNumber(int n)
{
	if (this->_s.size() == this->_n)
		throw Span::StorageLimit();
	this->_s.insert(n);

}

void Span::createRange(int min, int max)
{
	for (int i = min; i < max; i++)
	{
		try
		{
			this->addNumber(i);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}

int Span::shortestSpan()
{
	int minSpan = INT_MAX;
	int span;
	std::set<int>::iterator it;
	std::set<int>::iterator previous;

	for (it = this->_s.begin(); it != this->_s.end(); it++)
	{
		if (it != this->_s.begin())
		{
			span = *it - *previous;
			if (span < minSpan)
			minSpan = span;
		}
		previous = it;
	}
	return (minSpan);
}

int Span::longestSpan()
{
	int Min = *this->_s.begin();
	int Max = *this->_s.rbegin();

	return (Max - Min);
}

void Span::print(void)
{
	for (std::set<int>::iterator it = this->_s.begin(); it != this->_s.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}


const char* Span::StorageLimit::what() const throw()
{
	return ("Maximum numbers storage capacity reached!");
}
