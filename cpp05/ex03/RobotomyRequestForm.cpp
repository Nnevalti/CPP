#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("Robotomy Request", _sign, _exec), _target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src): Form(src), _target(src._target)
{
	return ;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if (this == &src)
		return (*this);
	this->_target = src._target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	Form::execute(executor);
	std::srand(time(NULL) + clock());
	std::cout << "* Brrrr Vzzzz Brrr *" << std::endl;
	if (rand() % 2)
	{
		std::cout << this->_target << " a bien été Robotomisé !" << std::endl;
	}
	else
	{
		std::cout << this->_target << " la Robotomisation a échoué !" << std::endl;
	}
	return ;
}
