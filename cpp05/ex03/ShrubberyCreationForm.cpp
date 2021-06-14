#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("Shruberry Creation", _sign, _exec), _target(target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src): Form(src), _target(src._target)
{
	return ;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	if (this == &src)
		return (*this);
	this->_target = src._target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	Form::execute(executor);
	std::ofstream output(this->_target + "_shruberry");
	if (output.fail())
	{

	}
	else
	{
		output << "     .{{}}}}}}.\n" \
		"    {{{{{{(`)}}}.\n" \
		"   {{{(`)}}}}}}}}}\n" \
		"  }}}}}}}}}{{(`){{{\n" \
		"  }}}}{{{{(`)}}{{{{\n" \
		" {{{(`)}}}}}}}{}}}}}\n" \
		"{{{{{{{{(`)}}}}}}}}}}\n" \
		"{{{{{{{}{{{{(`)}}}}}}\n" \
		" {{{{{(`)   {{{{(`)}'\n" \
		"  `\"\"'\" |   | \"'\"'`\n" \
		"  (`)  /     \\\n" \
		"~~~~~~~~~~~~~~~~~~~\n" << std::endl;
	}
	output.close();
}
