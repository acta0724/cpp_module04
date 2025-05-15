#include "Cat.hpp"

#include <string>
#include <iostream>

Cat::Cat() : Animal() {
	this->type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
	this->brain = new Brain();
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

Cat::Cat(const Cat& other) : Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = NULL;
	*this = other;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
		if (this->brain) {
			delete this->brain;
		}
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void Cat::makesound() const {
	std::cout << "吾輩は猫である" << std::endl;
}

Brain* Cat::getBrain() const {
	return this->brain;
}
