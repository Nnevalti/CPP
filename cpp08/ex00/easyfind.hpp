#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
int easyfind(T &array, int n)
{
	typename T::iterator it = std::find(array.begin(), array.end(), n);
	if (it == array.end())
		throw std::exception();
	return *it;
}

#endif
