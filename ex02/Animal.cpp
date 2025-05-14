#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("") {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type) {
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << "Animal assignment operator called" << std::endl;
	if (this != &other) {
		this->type = other.type;
	}
	return *this;
}

std::string Animal::getType() const {
	return this->type;
}

void Animal::makesound() const {
	std::cout << "Animal makes sound" << std::endl;
}
