#include "MutantStack.hpp"
#include <iostream>

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

	std::cout << "Iterator test:" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	std::cout << "Reverse Iterator test:" << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	++rit;
	--rit;

	while(rit != rite){
		std::cout << *rit << std::endl;
		++rit;
	}
	return 0;
}
