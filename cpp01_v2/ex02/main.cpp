#include <iostream>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* strPtr = &str;
	std::string& strRef = str;

	std::cout << "Using the variable: " << str << std::endl;
	std::cout << "Using a pointer: " << *strPtr << std::endl;
	std::cout << "Using a reference: " << strRef << std::endl;

	return (0);
}
