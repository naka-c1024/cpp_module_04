#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: Default constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
	*this = other;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		this->_type = other.getType();
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->_type << " says: Meow!" << std::endl;
}
