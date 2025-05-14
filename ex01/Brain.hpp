#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain {
 private:
	std::string ideas[100];
 public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
	void setIdea(int i, const std::string &message);
	std::string getIdea(int i) const;
};

#endif