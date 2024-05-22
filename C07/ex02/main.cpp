#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	{
		Array<int> array(1);
		for (int i = 0; i < 10; i++){
			try {
				array[i] = i;
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		for (int i = 0; i < 10; i++) {
			try {
				std::cout << array[i] << std::endl;
			} catch (std::exception &e) {
				std::cout << e.what() << std::endl;
			}
		}
		try {
			array[-10] = 10;
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	{
		Array<int> intArray;
		Array<std::string> array(2);
		array[0] = "salut";
		array[1] = "bonjour";
		for (int i = 0; i < 2; i++)
			std::cout << array[i] << std::endl;
	}
}
