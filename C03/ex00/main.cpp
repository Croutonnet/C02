#include "ClapTrap.hpp"

int	main(void){
	ClapTrap anthony("Anthony");
	ClapTrap breon("Breon");

	//HP test
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.beRepaired(200);
	anthony.takeDamage(150);
	anthony.takeDamage(150);
	anthony.takeDamage(150);
	anthony.attack("Willy");
	anthony.beRepaired(200000000);

	cout << endl;
	//Energy test
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.beRepaired(1500000000);
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.beRepaired(150);
	breon.takeDamage(150);
	breon.attack("Zahhh");

}