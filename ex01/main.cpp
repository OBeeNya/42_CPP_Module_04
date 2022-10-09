#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal	*animals[100];

<<<<<<< HEAD
	std::cout << " *** Creating 50 dogs then 50 cats from Animal class *** " \
	<< std::endl;

=======
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869
	for (int i = 0; i < 50; i++)
		animals[i] = new Dog();

	for (int i = 50; i < 100; i++)
		animals[i] = new Cat();

<<<<<<< HEAD
	std::cout << std::endl;
	std::cout << " *** Checking their types *** " << std::endl;

	for (int i = 0; i < 100; i++)
		std::cout << "This animal type is " << animals[i]->getType() << \
		"." << std::endl;

	std::cout << std::endl;
	std::cout << " *** Setting an idea to the 25th dog and the last cat *** " \
	<< std::endl;

	animals[24]->setIdea(0, "woofie woof woof?");
	animals[99]->setIdea(99, "meoow meeeeooooooooow!!!");

	std::cout << std::endl;
	std::cout << " *** Reading those ideas *** " << std::endl;

	std::cout << "Dog is having an idea: " << animals[24]->getIdea(0) << std::endl;
	std::cout << "Cat is having an idea: " << animals[99]->getIdea(99) << std::endl;

	std::cout << std::endl;
	std::cout << " *** Trying to set an idea too big for the brain *** " \
	<< std::endl;

	animals[0]->setIdea(100, "WOOOOOOOOOOF");

	std::cout << std::endl;
	std::cout << " *** Cleaning *** " << std::endl;
=======
	for (int i = 0; i < 100; i++)
	{
		std::cout << "This animal type is ";
		animals[i]->getType();
		std::cout << "." << std::endl;
	}
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

	for (int i = 0; i < 100; i++)
		delete animals[i];

	return (0);
}
