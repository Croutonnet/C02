#include "Span.hpp"
#include <exception>
int	main(void){
	{
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
	{
		Span arr(5);
		try{
			arr.addAllInBetween(1, 5);
			cout << "SHORTY: " << arr.shortestSpan() << endl;
			cout << "LONGY: " << arr.longestSpan() << endl;
		}catch(std::exception &e){
			cout << "Ah merde" << endl;
		}
	}
}