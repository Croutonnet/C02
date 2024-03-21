#include "base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <exception>

base *generate(void){
	std::srand(std::time(0));
	int nb = rand() % 3;
	nb++;
	if (nb == 1)
		return new A();
	else if (nb == 2)
		return new B();
	else if (nb == 3)
		return new C();
	return NULL;
}

void	identify(base *p){
	if (dynamic_cast<A*>(p) != NULL)
		cout << "A" << endl;
	else if (dynamic_cast<B*>(p) != NULL)
		cout << "B" << endl;
	else if (dynamic_cast<C*>(p) != NULL)
		cout << "C" << endl;
}

void	identify(base &p){
	try {
		(void)dynamic_cast<A&>(p);
		cout << "A" << endl;
	}catch (std::exception &e){
	}
	try {
		(void)dynamic_cast<B&>(p);
		cout << "B" << endl;
	}catch (std::exception &e){
	}
	try {
		(void)dynamic_cast<C&>(p);
		cout << "C" << endl;
	}catch (std::exception &e){
	}
}

int	main(void){
	base	*base;
	base = generate();
	identify(base);
	identify(*base);
}