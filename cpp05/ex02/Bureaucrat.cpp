# include "Bureaucrat.hpp"

// Coplien
Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
	if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade >= 151)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = grade;
	}
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
	return ;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this == &src)
		return (*this);
	this->_grade = src._grade;
	return (*this);
}

// Getter
std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

int					Bureaucrat::getGrade() const
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

void Bureaucrat::executeForm(Form const &form) const
{
	if (!form.getSigned())
	{
		std::cout << *this << " can't execute " << form
				<< " because the form is unsigned." << std::endl;
	}
	else if (form.getGradeToExecute() < this->_grade)
	{
		std::cout << *this << " cannot execute " << form
				<< " because the grade of " << this->_name << " is too low." << std::endl;
	}
	else
	{
		std::cout << this->_name << " executes " << form << std::endl;
	}
	form.execute(*this);
}

// Exceptions classes
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low !");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too High !");
}

// Ostream redefinition
std::ostream& operator<<(std::ostream& out, const Bureaucrat& b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (out);
}
