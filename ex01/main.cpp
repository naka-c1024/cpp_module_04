#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

#define	NUM 4

void check_array(void)
{
	Animal	*arr[NUM];

	for(int i = 0; i < NUM; i++)
	{
		if (i % 2 == 0)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}

	for(int i = 0; i < NUM; i++)
	{
		delete arr[i];
	}
}

void	check_deep_copy(void)
{
	const Cat	hoge;
	hoge.get_brain()->ideas_[0] = "Up to 100 characters can be assigned.";
	std::cout << hoge.get_brain()->ideas_[0] << std::endl;
	const Cat	hoge2 = hoge; // ここでコピー
	hoge2.get_brain()->ideas_[0] = "Deep copy done!!!!";
	std::cout << "hoge: " << hoge.get_brain()->ideas_[0] << std::endl; // 書き変わってないか確認
	std::cout << "hoge2: " << hoge2.get_brain()->ideas_[0] << std::endl;
}

void	cp_op_test(void)
{
	Animal	a;
	Animal	b(a);
	Animal	c;
	c = a;
	std::cout << "type: " << c.getType() << std::endl;
	Cat	d;
	Cat	e(d);
	Cat	f;
	f = d; // ここでleak
	std::cout << "type: " << f.getType() << std::endl;
	a = d;
	std::cout << "type: " << a.getType() << std::endl;
}

int main()
{
	std::cout << "---- Defalt test ----" << std::endl;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;

	std::cout << "\n---- create and fill an array of Animal objects. ----" << std::endl;
	check_array();
	std::cout << "\n---- test that your copies are deep copies! ----" << std::endl;
	check_deep_copy();
	std::cout << "\n---- copy constructor & operator= tests ----" << std::endl;
	cp_op_test();
	return 0;
}
