#include "Human.hpp"

Human::Human(){}

Human::~Human(){}

Brain const& Human::getBrain()
{
	return (this->brain);
}
std::string Human::identify() const
{
	std::cout << "Called identify from Human class :" << std::endl;
	return (this->brain.identify());
}
