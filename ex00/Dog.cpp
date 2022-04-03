#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->_type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
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
		this->_type = other.getType();
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->_type << " says: Woof!" << std::endl;
}