#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{
		std::cout << " *** Testing good implementation *** " << std::endl;

		const Animal	*dog = new Dog;
		const Animal	*cat = new Cat;

		std::cout << "Dog type is: ";
		std::cout << dog->getType() << std::endl;
		std::cout << "Cat type is: ";
		std::cout << cat->getType() << std::endl;

		std::cout << "Dog goes: ";
		dog->makeSound();
		std::cout << "Cat goes: ";
		cat->makeSound();

		delete dog;
		delete cat;
	}

	{
		std::cout << std::endl;
		std::cout << " *** Testing bad implementation *** " << std::endl;

		const WrongAnimal	*wrongCat = new WrongCat;

		std::cout << "WrongCat type is: ";
		std::cout << wrongCat->getType() << std::endl;

		std::cout << "WrongCat goes: ";
		wrongCat->makeSound();

		delete wrongCat;
	}

	return (0);
}
