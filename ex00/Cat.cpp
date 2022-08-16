#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
}
Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
}
Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << " says: Meow!" << std::endl;
}
