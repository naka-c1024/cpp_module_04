#include "Animal.hpp"
#include <iostream>

Animal::Animal():type("Animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}
Animal::Animal(const Animal &other)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = other;
}
Animal &Animal::operator=(const Animal &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}
	return *this;
}

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << getType() << " says: ..." << std::endl;
}
