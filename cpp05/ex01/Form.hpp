#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;

	public:
		// Coplien
		Form(std::string const name, int const gts, int const gte);
		virtual ~Form();
		Form(const Form& src);
		Form& operator=(const Form& src);

		// Getters / Setters
		std::string const getName() const;
		bool getSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		// Method
		void beSigned(const Bureaucrat& b);
		void signForm(const Bureaucrat& b);

		// Exceptions
		class GradeTooLowException : public std::exception
		{
			virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

// Overload Ostream
std::ostream &operator<<(std::ostream& out, const Form& f);

#endif
