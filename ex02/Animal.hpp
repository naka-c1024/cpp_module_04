#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal // 純粋仮想関数があるから抽象クラスになった
{
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const &other);
	Animal &operator=(Animal const &other);

	std::string	getType() const;
	virtual void	makeSound() const = 0; // 純粋仮想関数
protected:
	std::string	type;
};

#endif /* ANIMAL_HPP */
