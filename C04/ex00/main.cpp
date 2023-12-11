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
	std::cout << std::endl;
	std::cout << pitou->getType() << "	";
	pitou->makeSound();
	std::cout << menou->getType() << "	";
	menou->makeSound();
	std::cout << meta->getType() << "	";
	meta->makeSound();
	std::cout << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongMenou = new WrongCat();
	std::cout << std::endl;
	std::cout << wrongMenou->getType() << "	";
	wrongMenou->makeSound();
	std::cout << wrongMeta->getType() << "		";
	wrongMeta->makeSound();
	std::cout << std::endl;
	delete meta;
	delete pitou;
	delete menou;
	delete wrongMeta;
	delete wrongMenou;
	return 0;
}