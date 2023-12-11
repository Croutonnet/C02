#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

#define NBANIMAL 4


int main()
{
	// AAnimal error;
	AAnimal *meta[NBANIMAL];
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
}