#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->_type = "Cat";
}
Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
}
Cat::Cat(const Cat &other)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = other;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->_type << " says: Meow!" << std::endl;
}