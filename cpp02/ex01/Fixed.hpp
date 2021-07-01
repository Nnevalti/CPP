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

	private:
		int					_n;
		static const int	_fracBits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& src);

#endif
