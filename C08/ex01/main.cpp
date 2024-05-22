#include "Span.hpp"
#include <exception>
#include <vector>
int	main(void){
	{
		Span arr(1000);
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
		try{
			Span arr(10);
			std::vector<int> testVector;
			for (int i = 0; i < 10; i++){
				testVector.push_back(i);
			}
			arr.addMultiplesNumbers(testVector);
			cout << "SHORTY: " << arr.shortestSpan() << endl;
			cout << "LONGY: " << arr.longestSpan() << endl;
		}catch(std::exception &e){
			cout << e.what() << endl;
		}
	}
}