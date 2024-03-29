#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat: Default constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat &other):WrongAnimal(other)
{
	std::cout << "WrongCat: Copy constructor called" << std::endl;
}
WrongCat &WrongCat::operator=(const WrongCat &other)
{
	if (this != &other)
	{
		WrongAnimal::operator=(other);
	}
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << this->type << " says: Meow!" << std::endl;
}
