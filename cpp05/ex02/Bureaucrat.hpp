#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		// Coplien
		Bureaucrat(std::string const name, int grade);
		virtual ~Bureaucrat();
		Bureaucrat(const Bureaucrat& src);
		Bureaucrat& operator=(const Bureaucrat& src);

		// Getters / Setters
		std::string const getName() const;
		int getGrade() const;
		void downgrade();
		void upgrade();
		void executeForm(Form const &form) const;

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

std::ostream &operator<<(std::ostream& out, const Bureaucrat& b);

#endif
