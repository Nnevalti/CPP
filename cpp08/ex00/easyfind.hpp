#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <string>
#include <algorithm>


class NotFound: public std::exception
{
	virtual const char * what() const throw(){ return ("Couldn't find the value.");}
};

template <typename T>
int easyfind(T &array, int n)
{
	typename T::iterator it = std::find(array.begin(), array.end(), n);
	if (it == array.end())
		throw NotFound();
	return *it;
}

#endif
