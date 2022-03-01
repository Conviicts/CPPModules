#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__


template<typename T>
void	swap(T &a, T &b) {
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T	const &min(T const &x, T const &y) {
	if (y > x)
		return (y);
	return (x);
}

template<typename T>
T	const &max(T const &x, T const &y) {
	if (x > y)
		return (x);
	return (y);
}

#endif