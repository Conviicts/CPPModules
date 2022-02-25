#include "Span.hpp"
#include <iostream>
#include <algorithm>
#include <ctime>
#include <cstdlib>

int rndNbr() {
	return (std::rand() % 1000);
}

int main( void ) {
	{
		Span	span(10000);

		std::srand(unsigned(std::time(0)));

		try {
			std::cout << span.shortestSpan();
			std::cout << span.longestSpan();
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
		try {
			std::vector<int> array(7000);
			std::vector<int>::iterator begin = array.begin();
			std::vector<int>::iterator end = array.end();

			std::generate(begin, end, rndNbr);
			span.addRange(begin, end);

			std::vector<int> array1(3000);
			std::vector<int>::iterator begin1 = array1.begin();
			std::vector<int>::iterator end1 = array1.end();

			std::generate(begin1, end1, rndNbr);
			span.addRange(begin1, end1);

			std::cout << span.shortestSpan() << std::endl;
			std::cout << span.longestSpan() << std::endl;
			span.addNumber(10);
		} catch (std::exception &ex) {
			std::cout << ex.what() << std::endl;
		}
	}
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

}