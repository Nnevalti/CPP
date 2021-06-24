#ifndef SPAN_HPP
# define SPAN_HPP

# include <set>
# include <iostream>

class Span
{
	public:
		Span(unsigned int n);
		Span(const Span &src);
		Span &operator=(const Span &src);
		~Span();

		void addNumber(int n);
		void createRange(int min, int max);

		int shortestSpan();
		int longestSpan();

		void print(void);

		class StorageLimit : public std::exception
		{
			virtual const char* what() const throw();
		};

	private:
		unsigned int	_n;
		std::set<int>	_s;
};

#endif
