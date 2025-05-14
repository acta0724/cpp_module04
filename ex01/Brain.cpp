#include "Brain.hpp"

#include <iostream>
#include <sstream>
#include <string>

std::string ftItoa(int i) {
	std::ostringstream oss;
	oss << i;
	return oss.str();
}

Brain::Brain() {
	std::cout << "Brain constructor called" << std::endl;
	for(int i = 0; i < 100; ++i) {
		ideas[i] = "Thought" + ftItoa(i);
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << "Brain assignment operator called" << std::endl;
	if (this != &other) {
		for(int i = 0; i < 100; ++i) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

void Brain::setIdea(int i, const std::string &message) {
	if (i >= 0 && i <= 99) {
		this->ideas[i] = message;
	}
}

std::string Brain::getIdea(int i) const {
	if (i >= 0 && i <= 99) {
		return this->ideas[i];
	}
	return "";
}
