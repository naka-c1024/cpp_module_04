#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
	std::cout << "Cat: Default constructor called" << std::endl;
	this->type = "Cat";
	this->brain_ = new Brain();
}
Cat::~Cat()
{
	std::cout << "Cat: Destructor called" << std::endl;
	delete this->brain_;
}
Cat::Cat(const Cat &other):Animal(other)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	this->brain_ = new Brain(*(other.brain_));
}
Cat &Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain_;
		this->brain_ = new Brain(*(other.brain_));
	}
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << this->type << " says: Meow!" << std::endl;
}

Brain	*Cat::get_brain() const
{
	return (this->brain_);
}
