#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
	std::cout << "Dog: Default constructor called" << std::endl;
	this->type = "Dog";
	this->brain_ = new Brain();
}
Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
	delete brain_;
}
Dog::Dog(const Dog &other):Animal(other)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	this->brain_ = new Brain(*(other.brain_));
}
Dog &Dog::operator=(const Dog &other)
{
	if (this != &other)
	{
		Animal::operator=(other);
		delete this->brain_;
		this->brain_ = new Brain(*(other.brain_));
	}
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << this->type << " says: Woof!" << std::endl;
}

Brain	*Dog::get_brain() const
{
	return (this->brain_);
}
