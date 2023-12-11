#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NBANIMAL 4

int main(){
	const Animal *meta[NBANIMAL];
	for (int i = 0; i < NBANIMAL / 2; i++){
		meta[i] = new Cat();
	}
	for (int i = NBANIMAL / 2; i < NBANIMAL; i++){
		meta[i] = new Dog();
	}
	for (int i = 0; i < NBANIMAL; i++){
		meta[i]->makeSound();
	}
	for (int i = 0; i < NBANIMAL; i++){
		delete meta[i];
	}
	std::cout << std::endl << "TEST DE DEEP COPY" << std::endl << std::endl;
	Cat *moi = new Cat();
	moi->giveIdea("Je");
	moi->giveIdea("ne");
	moi->giveIdea("veux");
	moi->giveIdea("pas");
	moi->giveIdea("bruler");
	moi->giveIdea("le");
	moi->giveIdea("monde");
	for (unsigned int i = 0; i < 7; i++){
		std::cout << moi->printIdea(i) << std::endl;
	}
	Cat toi(*moi);
	for (unsigned int i = 0; i < 7; i++){
		std::cout << toi.printIdea(i) << " COPY" << std::endl;
	}
	delete moi;
}
