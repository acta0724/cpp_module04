#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
	WrongCat();
	virtual ~WrongCat();
	WrongCat(const WrongCat& other);
	WrongCat& operator=(const WrongCat& other);
	void makesound() const;
};

#endif
