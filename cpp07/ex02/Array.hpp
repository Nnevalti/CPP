template <typename T>
class Array
{
	public:
		Array(): _array(NULL), _size(0){}
		Array(unsigned int size): _array(new T[size]()), _size(size){}
		~Array()
		{
			if (this->_array != NULL)
				delete [] this->_array;
		}

		Array(const Array &src): _array(NULL), _size(0)
		{
			*this = src;
		}

		Array& operator=(const Array& src)
		{
			if (this == &src)
				return *this;
			if (this->_array != NULL)
				delete [] this->_array;
			this->_array = new T[src._size]();
			this->_size = src._size;
			for (unsigned int i = 0; i < this->_size; i++)
			{
				this->_array[i] = src._array[i];
			}
			return *this;
		}

		T& operator[](unsigned int i)
		{
			if (!this->_array || i < 0 || i >= this->_size)
				throw Array::ElementsOutOflimits();
			return this->_array[i];
		}

		unsigned int size(void) const
		{
			return this->_size;
		}

		class ElementsOutOflimits: public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Trying to acces an elements that is out of limits");
			}
		};

	private:
		T*				_array;
		unsigned int	_size;
};
