#include <iostream>

using std::string;
using std::cout;
using std::endl;

template <class T>
void	iter(T *add, int length, void func(T &context)){
	for (int i = 0; i < length; i++){
		func(add[i]);
	}
}
template <class T>
void	showMeTheChar(T &c){
	cout << c << endl;
}