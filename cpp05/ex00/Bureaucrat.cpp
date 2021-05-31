# include "Bureaucrat.hpp"

// Coplien
Bureaucrat::Bureaucrat(std::string const name, int grade)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade >= 151)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;
	return ;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	this->_name = src._name;
	this->_grade = src._grade;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this == &src)
		return (*this);
	this->_name = src._name;
	this->_grade = src._grade;
	return ;
}

// Getter
std::string const	Bureaucrat::getName()
{
	return (this->_name);
}

int					Bureaucrat::getGrade()
{
	return (this->_grade);
}

void				Bureaucrat::downgrade()
{
	if (this->_grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += 1;
	return ;
}
void				Bureaucrat::upgrade()
{
	if (this->_grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= 1;
	return ;

}

// Exceptions classes
Bureaucrat::GradeTooLowException::GradeTooLowException() throw {}

Bureaucrat::GradeTooHighException::GradeTooHighException() throw {}

// Ostream redefinition
std::ostream &operator(std::ostream& out, const Bureaucrat& b)
{
	out << std::endl;
}
