#include "Form.hpp"

// Coplien
Form::Form(std::string const name, int const gts, int const gte): _name(name), _signed(false), _gradeToSign(gts), _gradeToExecute(gte)
{
	if (this->_gradeToExecute < 1 || this->_gradeToSign < 1)
	{
		throw Form::GradeTooHighException();
	}
	else if (this->_gradeToExecute > 150 || this->_gradeToSign > 150)
	{
		throw Form::GradeTooLowException();
	}
	return ;
}

Form::~Form()
{
	return ;
}

Form::Form(const Form& src):
_name(src._name),
_signed(src._signed),
_gradeToSign(src._gradeToSign),
_gradeToExecute(src._gradeToExecute)
{
	*this = src;
	return ;
}

Form& Form::operator=(const Form& src)
{
	if (this == &src)
		return (*this);
	this->_signed = src._signed;
	return (*this);
}

// Getters / Setters
std::string const Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

int Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

// Method
void Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() <= this->_gradeToSign)
	{
		this->_signed = true;
	}
	else
		throw Form::GradeTooLowException();
	return ;
}

// Exceptions
const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too Low for the Form!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too High the Form!");
}

// Overload Ostream

std::ostream& operator<<(std::ostream& out, const Form& f)
{
	out << f.getName() << " is ";
	if (f.getSigned() == true)
		out << "signed." << std::endl;
	else
		out << "not signed." << std::endl;
	out << "Grade to sign: " << f.getGradeToSign() << std::endl
	<< "Grade to execute: " << f.getGradeToExecute() << std::endl;
	return (out);
}
