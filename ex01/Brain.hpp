#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
public:
	Brain();
	~Brain();
	Brain(Brain const &other);
	Brain &operator=(Brain const &other);

	std::string	ideas_[100];
};

#endif /* BRAIN_HPP */
