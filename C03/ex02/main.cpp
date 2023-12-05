#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void){
	FragTrap anthony("Anthony");
	FragTrap breon("Breon");

	//HP test
	anthony.highFivesGuys();
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.highFivesGuys();
	anthony.takeDamage(1);
	anthony.takeDamage(1);
	anthony.beRepaired(200);
	anthony.takeDamage(150);
	anthony.takeDamage(150);
	anthony.takeDamage(150);
	anthony.attack("Willy");
	anthony.highFivesGuys();
	anthony.beRepaired(200000000);

	cout << endl;
	//Energy test
	breon.highFivesGuys();
	for (int i = 0; i < 100; i++){
		breon.attack("Zahhh");
	}
	breon.beRepaired(1500000000);
	breon.highFivesGuys();
	breon.beRepaired(150);
	breon.takeDamage(150);
	breon.attack("Zahhh");
	anthony.highFivesGuys();

}