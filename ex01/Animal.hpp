#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
public:
	Animal();
	virtual ~Animal(); // virtualにしないとメモリーリークが起きる, 試すときはフラグは外す
	Animal(Animal const &other);
	Animal &operator=(Animal const &other);

	std::string	getType() const;
	virtual void	makeSound() const;
protected:
	std::string	_type;
};

#endif /* ANIMAL_HPP */