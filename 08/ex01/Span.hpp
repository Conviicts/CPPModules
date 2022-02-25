#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private:
		std::vector<int>	_nbrs;
		unsigned int		_size;
	public:
		Span(unsigned int size);
		Span(const Span &ref);
		Span	&operator=(const Span &ref);
		~Span();

		void	addNumber(const int nb);
		void	addRange(std::vector<int>::iterator i, std::vector<int>::iterator j);
		int		shortestSpan(void);
        int		longestSpan(void);
};

#endif