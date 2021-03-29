# include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_n = 0;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->_n = i << _fracBits;
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->_n = roundf(f * (1 << _fracBits));
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

int Fixed::toInt() const
{
	return ((int)(this->_n) >> _fracBits);
}

float Fixed::toFloat() const
{
	return ((float)(this->_n) / (1 << _fracBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return (os);
}
