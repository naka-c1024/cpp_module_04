#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain: Defalt constructor called" << std::endl;
}
Brain::~Brain()
{
	std::cout << "Brain: Destructor called" << std::endl;
}
Brain::Brain(const Brain &other)
{
	std::cout << "Brain: Copy constructor called" << std::endl;
	*this = other;
}
Brain &Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < 100; i++)
		{
			this->ideas_[i] = other.ideas_[i];
		}
	}
	return *this;
}
