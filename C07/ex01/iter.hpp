#include <iostream>

using std::string;
using std::cout;
using std::endl;

// template <typename T>
// void	iter(T *add, int length, void func(T &context)){
// 	for (int i = 0; i < length; i++){
// 		func(add[i]);
// 	}
// }

template <typename T, typename F>
void	iter(T *add, int length, F func){
	for (int i = 0; i < length; i++){
		func(add[i]);
	}
}

template <typename T>
void	increment(T &context){
	context++;
}

template <typename T>
void	desincrement(T &context){
	context--;
}

template <class T>
void	showMeTheChar(T &c){
	cout << c << endl;
}