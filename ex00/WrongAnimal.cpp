#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;

}
WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = other;
}
WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << this->_type << " says: ..." << std::endl;
}