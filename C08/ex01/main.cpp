#include "Span.hpp"
int	main(void){
	Span arr(10000);
	try{
		for (unsigned int i = 1; i < arr.size(); i++){
			srand((unsigned)time(NULL) + rand());
				arr.addNumber(rand() + 1);
		}
		cout << "SHORTY: " << arr.shortestSpan() << endl;
		cout << "LONGY: " << arr.longestSpan() << endl;
	}catch(std::exception &e){
		cout << "Ah merde" << endl;
	}
}