#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain();
}
Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete _brain;
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
		this->type = other.getType();
		this->_brain = new Brain();
		for (size_t i = 0; i < 100; i++)
		{
			this->_brain->_ideas[i] = other._brain->_ideas[i];
		}
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << " says: Meow!" << std::endl;
}

Brain	*Cat::get_brain() const
{
	return (this->_brain);
}