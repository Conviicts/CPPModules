#ifndef __ITER_HPP__
#define __ITER_HPP__
#include <iostream>

template<typename T>
class Array {
	private:
		T				*_array;
		unsigned int	_size;
	public:
		Array<T>(void) : _array(NULL) {};
		Array<T>(unsigned int n) : _array(new T[n]), _size(n) {};
		~Array<T>(void) {
			if (_array != NULL)
				delete[] _array;
		}
		Array<T>(const Array<T> &ref) {
			_size = ref.size();
			_array = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
				_array[i] = ref._array[i];	
		}

		Array<T>		&operator=(const Array<T> &ref) {
			_size = ref.size();
			_array = new T[_size];

			for (unsigned int i = 0; i < _size; i++)
				_array[i] = ref._array[i];
			return (*this);
		}

		T				&operator[](unsigned int i) const {
			if (i >= _size)
				throw OutOfRange();
			return (_array[i]);
		}

		unsigned int	size(void) const {
			return (_size);
		}

		class OutOfRange : public std::exception {
            public:
                virtual const char *what() const throw() {
                    return ("Out of range");
                };
        };
};

#endif