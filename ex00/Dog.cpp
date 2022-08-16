#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
}
Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}
Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type << " says: Woof!" << std::endl;
}
