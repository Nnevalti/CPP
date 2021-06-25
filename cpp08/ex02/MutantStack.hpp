#include <stack>

#ifndef MUATNTSTACK_HPP
# define MUTANTSTACK_HPP

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(): std::stack<T>() {}
		~MutantStack() {}

		// Copy constrcutor
		MutantStack(const MutantStack &src): std::stack<T>(src) {}
		MutantStack(const std::stack<T> &src): std::stack<T>(src) {}

		// reuse = operator from stack container
		using std::stack<T>::operator=;

		// replace std::stack<T>::container_type::iterator by iterator (easier to use)
		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin(void) { return (std::stack<T>::c.begin()); }
		iterator end(void) { return (std::stack<T>::c.end()); }
};

#endif
