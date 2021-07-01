# include "Fixed.hpp"

Fixed::Fixed()
{
	this->_n = 0;
}

Fixed::Fixed(const int i)
{
	this->_n = i << _fracBits;
}

Fixed::Fixed(const float f)
{
	this->_n = roundf(f * (1 << _fracBits));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed& src)
{
	*this = src;
	return ;
}

Fixed &Fixed::operator=(const Fixed& src)
{
	if (this != &src)
	{
		this->_n = src.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits() const
{
	return (this->_n);
}

void Fixed::setRawBits(int const raw)
{
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

bool	Fixed::operator>(Fixed const &src) const
{
	if (this->_n > src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &src) const
{
	if (this->_n < src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &src) const
{
	if (this->_n >= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &src) const
{
	if (this->_n <= src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &src) const
{
	if (this->_n == src.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &src) const
{
	if (this->_n != src.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &src) const
{
	Fixed tmp(this->toInt() + src.toInt());
	return (tmp);
}

Fixed	Fixed::operator-(Fixed const &src) const
{
	Fixed tmp(this->toInt() - src.toInt());
	return (tmp);
}

Fixed	Fixed::operator*(Fixed const &src) const
{
	Fixed tmp(this->toFloat() * src.toFloat());
	return (tmp);
}

Fixed	Fixed::operator/(Fixed const &src) const
{
	Fixed tmp(this->toFloat() / src.toFloat());
	return (tmp);
}

Fixed Fixed::operator++()
{
	this->_n++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	this->_n++;
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_n++;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	this->_n--;
	return (tmp);
}

Fixed &Fixed::min(Fixed &fp1, Fixed &fp2)
{
	if (fp1 < fp2)
		return (fp1);
	return (fp2);
}

Fixed &Fixed::max(Fixed &fp1, Fixed &fp2)
{
	if (fp1 > fp2)
		return (fp1);
	return (fp2);
}

const Fixed &Fixed::min(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1 < fp2)
		return (fp1);
	return (fp2);
}

const Fixed &Fixed::max(const Fixed &fp1, const Fixed &fp2)
{
	if (fp1 > fp2)
		return (fp1);
	return (fp2);
}



std::ostream& operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return (os);
}
