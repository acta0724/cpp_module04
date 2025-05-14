#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Dog : public Animal {
 private:
	Brain *brain;
 public:
	Dog();
	virtual ~Dog();
	Dog(const Dog& other);
	Dog& operator=(const Dog& other);
	virtual void makesound() const;
	Brain *getBrain() const;
};

#endif