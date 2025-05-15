#include "WrongDog.hpp"

#include <string>
#include <iostream>

WrongDog::WrongDog() : WrongAnimal() {
	this->type = "WrongDog";
	std::cout << "WrongDog constructor called" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog& other) : WrongAnimal(other) {
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = other;
}

WrongDog& WrongDog::operator=(const WrongDog& other) {
	std::cout << "WrongDog assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

void WrongDog::makesound() const {
	std::cout << "Woof woof!" << std::endl;
}
