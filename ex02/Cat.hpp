#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(Cat const &other);
	Cat &operator=(Cat const &other);

	void	makeSound() const;
	Brain	*get_brain() const;

private:
	Brain	*_brain;
};

#endif /* CAT_HPP */
