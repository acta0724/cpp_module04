#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

#include <iostream>

int main() {
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << std::endl << "--- array test ---" << std::endl;
	const int count = 4;
	Animal* animals[count];
	for (int k = 0; k < count; ++k) {
		if (k % 2 == 0) {
			animals[k] = new Dog();
		} else if (k % 2 == 1) {
			animals[k] = new Cat();
		}
	}
	std::cout << std::endl;
	for (int k = 0; k < count; ++k) {
		std::cout << animals[k]->getType() << std::endl;
		animals[k]->makesound();
	}
	for (int k = 0; k < count; ++k) {
		delete animals[k];
	}
	std::cout << std::endl;
	std::cout << "--- deep copy test ---" << std::endl;
	Dog *Tom = new Dog();
	Tom->getBrain()->setIdea(0, "That mouse is gonna drive me crazy");
	Tom->getBrain()->setIdea(1, "I've got you this time, Jerry!");

	std::cout << std::endl << "--- orignal ---" << std::endl;
	std::cout << Tom->getBrain()->getIdea(0) << std::endl;
	std::cout << Tom->getBrain()->getIdea(1) << std::endl << std::endl;

	Dog *Sadaharu = new Dog(*Tom);

	Sadaharu->getBrain()->setIdea(0, "I only bite people who deserve it.");
	Sadaharu->getBrain()->setIdea(1, "I'm not a pet. I'm your protector, remember?");

	std::cout << std::endl << "--- refined ---" << std::endl;
	std::cout << Sadaharu->getBrain()->getIdea(0) << std::endl;
	std::cout << Sadaharu->getBrain()->getIdea(1) << std::endl << std::endl;
	delete Tom;
	delete Sadaharu;

	// std::cout << "--- abstract test ---" << std::endl;
	// Animal *animal = new Animal();
	// delete animal;
	return 0;
}
