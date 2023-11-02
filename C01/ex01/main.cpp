#include "Zombie.hpp"

#define NB 15

int	main(void){
	Zombie *zombie = zombieHorde(NB, "Bobby bob bob");
	for (int i = 0; i < NB; i++) {
		zombie[i].announce();
	}
	delete [] zombie;
}