#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main() {
	std::cout <<  std::endl << "--- Dog test ---" << std::endl << std::endl;
	Animal *Bulldog = new Dog();
	std::cout << "I`m " << Bulldog->getType() << std::endl;
	Bulldog->makesound();
	delete Bulldog;

	std::cout <<  std::endl << "--- Tom test ---" << std::endl << std::endl;
	Dog *Bond = new Dog();
	Dog *Tom = new Dog(*Bond);
	std::cout << "I`m " << Tom->getType() << std::endl;
	Tom->makesound();
	delete Bond;
	delete Tom;

	std::cout <<  std::endl << "--- Cat test ---" << std::endl << std::endl;
	Animal * Munchkin = new Cat();
	std::cout << "I`m " << Munchkin->getType() << std::endl;
	Munchkin->makesound();
	delete Munchkin;

	std::cout <<  std::endl << "--- Animal test ---" << std::endl << std::endl;
	Animal * animal = new Animal();
	std::cout << "I`m " << animal->getType() << std::endl;
	animal->makesound();
	delete animal;

	std::cout <<  std::endl << "--- WrongDog test ---" << std::endl << std::endl;
	WrongAnimal * Dog = new WrongDog();
	std::cout << "I`m " << Dog->getType() << std::endl;
	Dog->makesound();
	delete Dog;

	std::cout <<  std::endl << "--- WrongCat test ---" << std::endl << std::endl;
	WrongAnimal * Cat = new WrongCat();
	std::cout << "I`m " << Cat->getType() << std::endl;
	Cat->makesound();
	delete Cat;

	std::cout <<  std::endl << "--- WrongAnimal test ---" << std::endl << std::endl;
	WrongAnimal * Animal = new WrongAnimal();
	std::cout << "I`m " << Animal->getType() << std::endl;
	Animal->makesound();
	delete Animal;
	return 0;
}
