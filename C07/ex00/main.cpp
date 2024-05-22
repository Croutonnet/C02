#include "whatever.hpp"

int	main(void){
	{
		int nb1 = 4;
		int nb2 = 5;
		char a = 'a';
		char c = 'c';
		std::string str1 = "string a 1 mouda";
		std::string str2 = "string e 2 pappy";

		cout << "--------AVANT----------" << endl;
		cout << "A: " << a << "	C: " << c << endl;
		cout << "NB1: " << nb1 << "	NB2: " << nb2 << endl;
		cout << "STR1: " << str1 << "	str2: " << str2 << endl;
		cout << "--------MIN----------" << endl;
		cout << "MIN NB: " << ::min(nb1, nb2) << endl;
		cout << "MIN CHAR: " << ::min(a, c) << endl;
		cout << "MIN STR: " << ::min(str1, str2) << endl;
		cout << "--------MAX----------" << endl;
		cout << "MAX NB: " << ::max(nb1, nb2) << endl;
		cout << "MAX CHAR: " << ::max(a, c) << endl;
		cout << "MAX STR: " << ::max(str1, str2) << endl;
		cout << "--------SWAP----------" << endl;
		::swap(nb1, nb2);
		::swap(a, c);
		::swap(str1, str2);
		cout << "A: " << a << "	C: " << c << endl;
		cout << "NB1: " << nb1 << "	NB2: " << nb2 << endl;
		cout << "STR1: " << str1 << "	str2: " << str2 << endl;
	}
}