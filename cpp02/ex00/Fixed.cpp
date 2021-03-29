# include "Fixed.hpp"

const int fracBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed &Fixed::operator=(const Fixed& src)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &src)
	{
		this->_n = src.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits function member called" << std::endl;
	return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits function member called" << std::endl;
	this->_n = raw;
}
