#include "Span.hpp"

Span::Span(unsigned int size) : _size(size) {
	return ;
}

Span::Span(const Span &ref) {
	std::vector<int> array = ref._nbrs;
	for (std::vector<int>::iterator i = array.begin(); i != array.end(); i++)
		array.push_back(*i);
	_size = ref._size;
}

Span	&Span::operator=(const Span &ref) {
	std::vector<int> array = ref._nbrs;
	for (std::vector<int>::iterator i = array.begin(); i != array.end(); i++)
		array.push_back(*i);
	_size = ref._size;
	return (*this);
}

Span::~Span() {
	return ;
}

void	Span::addNumber(const int nb) {
	if (_nbrs.size() >= _size)
		throw std::invalid_argument("can't add more values to this array");
	std::vector<int>::iterator i = std::find(_nbrs.begin(), _nbrs.end(), nb);
	if (i == _nbrs.end())
		_nbrs.push_back(nb);
}

void	Span::addRange(std::vector<int>::iterator i, std::vector<int>::iterator j) {
	if (i != j) {
		int distance = std::distance(i, j);
		if ((distance + _nbrs.size()) > _size)
			throw std::invalid_argument("can't add more values to this array");
		_nbrs.insert(_nbrs.begin() + _nbrs.size(), i , j);
	}
}

int		Span::shortestSpan(void) {
	if (_nbrs.size() <= 1)
		throw std::invalid_argument("There is only one or no value in this array");
	int min = abs(*std::max_element(_nbrs.begin(), _nbrs.end()) - *std::min_element(_nbrs.begin(), _nbrs.end()));
    for (std::vector<int>::iterator i = _nbrs.begin(); i != _nbrs.end(); i++) {
        for (std::vector<int>::iterator j = (i + 1); j != _nbrs.end(); j++) {
            if (abs(*j - *i) < min)
                min = abs(*j - *i);
        }
    }
    return (min);
}

int		Span::longestSpan(void) {
	if (_nbrs.size() <= 1)
		throw std::invalid_argument("There is only one or no value in this array");
	int min = *std::min_element(_nbrs.begin(), _nbrs.end());
    int max = *std::max_element(_nbrs.begin(), _nbrs.end());
    return (max - min);
}