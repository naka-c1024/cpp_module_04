#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(Dog const &other);
	Dog &operator=(Dog const &other);

	void	makeSound() const;
	Brain	*get_brain() const;

private:
	Brain	*_brain;
};

#endif /* DOG_HPP */