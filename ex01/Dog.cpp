#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain();
}
Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete this->_brain;
}
Dog::Dog(const Dog &other)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = other;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		this->type = other.getType();
		this->_brain = new Brain();
		for (size_t i = 0; i < 100; i++)
		{
			this->_brain->_ideas[i] = other._brain->_ideas[i];
		}
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type << " says: Woof!" << std::endl;
}

Brain	*Dog::get_brain() const
{
	return (this->_brain);
}
