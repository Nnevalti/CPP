#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <tgmath.h>

class Fixed
{
	public:
		Fixed();
		Fixed(const int i);
		Fixed(const float f);
		~Fixed();
		Fixed(const Fixed& src);
		Fixed& operator=(const Fixed& src);
		int getRawBits() const;
		void setRawBits(int const raw);
		float toFloat() const;
		int toInt() const;

		// Comparison operator
		bool	operator>(Fixed const &src) const;
		bool	operator<(Fixed const &src) const;
		bool	operator>=(Fixed const &src) const;
		bool	operator<=(Fixed const &src) const;
		bool	operator==(Fixed const &src) const;
		bool	operator!=(Fixed const &src) const;

		// Arithmetic operator
		Fixed	operator+(Fixed const &src) const;
		Fixed	operator-(Fixed const &src) const;
		Fixed	operator*(Fixed const &src) const;
		Fixed	operator/(Fixed const &src) const;

		// Pre-increment, Post-increment, Pre-decrement, Post-decrement
		Fixed operator++();
		Fixed operator++(int);
		Fixed operator--();
		Fixed operator--(int);

		// Min, Max
		static Fixed &min(Fixed &fp1, Fixed &fp2);
		static Fixed &max(Fixed &fp1, Fixed &fp2);
		static const Fixed &min(const Fixed &fp1, const Fixed &fp2);
		static const Fixed &max(const Fixed &fp1, const Fixed &fp2);
	private:
		int					_n;
		static const int	_fracBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& src);

#endif
