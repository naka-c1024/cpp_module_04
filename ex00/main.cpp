#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void	wrong_version_test(void)
{
	std::cout << "\n---- Wrong version! ----" << std::endl;
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *i2 = new WrongCat();
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); // virtualじゃないからcatが呼ばれていない
	meta2->makeSound();
	delete meta2;
	delete i2;
}

void	cp_op_test(void)
{
	std::cout << "\n---- copy constructor & operator= tests ----" << std::endl;
	Animal	a;
	Animal	b(a);
	Animal	c;
	c = a;
	std::cout << "type: " << c.getType() << std::endl;
	Cat	d;
	Cat	e(d);
	Cat	f;
	f = d;
	std::cout << "type: " << f.getType() << std::endl;
	a = d;
	std::cout << "type: " << a.getType() << std::endl;
}

int main()
{
	std::cout << "---- Defalt test ----" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	wrong_version_test();
	cp_op_test();
	return 0;
}
