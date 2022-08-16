#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	virtual ~Cat();
	Cat(Cat const &other);
	Cat &operator=(Cat const &other);

	void	makeSound() const;
	Brain	*get_brain() const;

private:
	Brain	*brain_;
};

#endif /* CAT_HPP */
