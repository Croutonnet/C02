#include "iter.hpp"

int	main(void){
	char test[151] = "Je suis une string qui comporte beaucoup de character, je vais donc essayer de les écrire un a un pour faire disparaitre le plus possible le terminal";
	iter(test, 150, showMeTheChar<char>);

	int tab[] = {1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10, 11, 12 ,13 ,14, 15};
	iter(tab, 16, showMeTheChar<int>);
	iter(tab, 16, increment);
	cout << tab << endl;
}
