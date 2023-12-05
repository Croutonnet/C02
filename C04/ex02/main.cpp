#include "AAnimal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// AAnimal error;
	AAnimal *meta[20];
	for (int i = 0; i < 10; i++){
		meta[i] = new Cat();
	}
	for (int i = 10; i < 20; i++){
		meta[i] = new Dog();
	}
	for (int i = 0; i < 20; i++){
		meta[i]->makeSound();
	}
	for (int i = 0; i < 20; i++){
		delete meta[i];
	}
}