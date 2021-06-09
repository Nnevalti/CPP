#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Presidential Pardon", _sign, _exec), _target(target)
{
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src): Form(src), _target(src._target)
{
	return ;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if (this == &src)
		return (*this);
	this->_target = src._target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	Form::execute(executor);
	std::cout << this->_target << " a été pardonnée par Zafod Beeblebrox." << std::endl;
}
