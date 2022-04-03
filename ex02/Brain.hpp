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

	std::string	_ideas[100]; // privateにする?
};

#endif /* BRAIN_HPP */
