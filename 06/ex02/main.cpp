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

    if (i == 0) {
        std::cout << "[A] Created" << std::endl;
        return (new A);
    }
    else if (i == 1) {
        std::cout << "[B] Created" << std::endl;
        return (new B);
    }
    else {
        std::cout << "[C] Created" << std::endl;
        return (new C);
    }
}

void identify(Base* p) {
	try {
		A &a = dynamic_cast<A&>(*p);
		(void)a;
		std::cout << "identify from pointer: A" << std::endl;
	} catch (std::exception &ex) {
		try {
			B &b = dynamic_cast<B&>(*p);
			(void)b;
			std::cout << "identify from pointer: B" << std::endl;
		} catch (std::exception &ex) {
			try {
				C &c = dynamic_cast<C&>(*p);
				(void)c;
				std::cout << "identify from pointer: C" << std::endl;
			} catch (std::exception &ex) {
				std::cerr << ex.what() << std::endl;
			}
		}
	}
}

void identify(Base& p) {
	try {
		A &a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "identify from reference: A" << std::endl;
	} catch (std::exception &ex) {
		try {
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "identify from reference: B" << std::endl;
		} catch (std::exception &ex) {
			try {
				C &c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "identify from reference: C" << std::endl;
			} catch (std::exception &ex) {
				std::cerr << ex.what() << std::endl;
			}
		}
	}
}


int main() {
	Base *base = generate();
	
	identify(base);
	identify(*base);

	delete base;
	return 0;
}