#include "MutantStack.hpp"
#include <iostream>

// int main()
// {
// 	MutantStack<int> m;
// 	m.push(42);
// 	m.push(21);
// 	m.push(2);
// 	m.push(10);
// 	m.push(89);
// 	std::cout << m.size() << std::endl;
// 	for (MutantStack<int>::iterator it = m.begin(); it != m.end(); it++)
// 	{
// 		std::cout << *it << std::endl;
// 	}
// 	return 0;
// }

int main(void)
{
	MutantStack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.pop();
	std::cout << "Size: " << mstack.size() << std::endl;
	std::cout << "Begin: " << *mstack.begin() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.push(42);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
