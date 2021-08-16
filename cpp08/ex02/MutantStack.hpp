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
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

		iterator begin(void) { return (std::stack<T>::c.begin()); }
		iterator end(void) { return (std::stack<T>::c.end()); }
		// const_iterator begin(void) { return (std::stack<T>::c.begin()); }
		// const_iterator end(void) { return (std::stack<T>::c.end()); }
		reverse_iterator rbegin(void) { return (std::stack<T>::c.rbegin()); }
		reverse_iterator rend(void) { return (std::stack<T>::c.rend()); }
		// const_reverse_iterator rbegin(void) { return (std::stack<T>::c.rbegin()); }
		// const_reverse_iterator rend(void) { return (std::stack<T>::c.rend()); }
};

#endif
