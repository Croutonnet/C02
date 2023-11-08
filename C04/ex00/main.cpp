#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* pitou = new Dog();
	const Animal* menou = new Cat();
	std::cout << pitou->getType() << " " << std::endl;
	pitou->makeSound();
	std::cout << menou->getType() << " " << std::endl;
	menou->makeSound();
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongMenou = new WrongCat();
	std::cout << wrongMenou->getType() << " " << std::endl;
	wrongMenou->makeSound();
	std::cout << wrongMeta->getType() << " " << std::endl;
	wrongMeta->makeSound();
	delete meta;
	delete pitou;
	delete menou;
	delete wrongMeta;
	delete wrongMenou;
	return 0;
}