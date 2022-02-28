#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void) {
    std::srand(std::time(NULL));
    int i = std::rand() % 3;

    if (i == 0)
        return (new A);
    else if (i == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p) {
	if (p) {
		if (dynamic_cast<A*>(p))
			std::cout << "identify from pointer: A" << std::endl;
		else if (dynamic_cast<B*>(p))
			std::cout << "identify from pointer: B" << std::endl;
		else if (dynamic_cast<C*>(p))
			std::cout << "identify from pointer: C" << std::endl;
	}
}

void identify(Base& p) {
	if (dynamic_cast<A*>(&p))
		std::cout << "identify from pointer: A" << std::endl;
	else if (dynamic_cast<B*>(&p))
		std::cout << "identify from pointer: B" << std::endl;
	else if (dynamic_cast<C*>(&p))
		std::cout << "identify from pointer: C" << std::endl;
}


int main() {
	Base *base = generate();
	Base *base2 = NULL;
	
	identify(base);
	identify(*base);

	identify(base2);
	identify(*base2);

	delete base;
	return 0;
}