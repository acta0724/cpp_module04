#include "Dog.hpp"

#include <string>
#include <iostream>

Dog::Dog() : Animal() {
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& other) : Animal(other){
	std::cout << "Dog copy constructor called" << std::endl;
	this->brain = NULL;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << "Dog assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
		if (this->brain) {
			delete this->brain;
		}
		this->brain = new Brain(*other.brain);
	}
	return *this;
}

void Dog::makesound() const{
	std::cout << "Woof woof!" << std::endl;
}

Brain* Dog::getBrain() const {
	return this->brain;
}
