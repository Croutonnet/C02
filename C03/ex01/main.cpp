#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	ScavTrap anthony("Anthony");
	ScavTrap breon("Breon");

	//HP test
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.guardGate();
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.beRepaired(200);
	anthony.takeDamage(150);
	anthony.takeDamage(150);
	anthony.takeDamage(150);
	anthony.attack("Willy");
	anthony.guardGate();
	anthony.beRepaired(200000000);

	cout << endl;
	//Energy test
	breon.guardGate();
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.beRepaired(1500000000);
	breon.attack("Zahhh");
	breon.guardGate();
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.attack("Zahhh");
	breon.beRepaired(150);
	breon.takeDamage(150);
	breon.attack("Zahhh");
	anthony.guardGate();

}