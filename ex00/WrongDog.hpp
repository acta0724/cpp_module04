#ifndef WRONG_DOG_HPP
#define WRONG_DOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal {
 public:
	WrongDog();
	virtual ~WrongDog();
	WrongDog(const WrongDog& other);
	WrongDog& operator=(const WrongDog& other);
	void makesound() const;
};

#endif
