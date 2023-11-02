#include "Zombie.hpp"

int main(void){
	Zombie *testMonsieur;

	testMonsieur = newZombie("PAPA");
	testMonsieur->announce();
	delete testMonsieur;
	testMonsieur = newZombie("MAMAN");
	testMonsieur->announce();
	delete testMonsieur;
	testMonsieur = newZombie("");
	testMonsieur->announce();
	delete testMonsieur;
	randomChump("MOI");
	randomChump("TOI");
	randomChump("");
}