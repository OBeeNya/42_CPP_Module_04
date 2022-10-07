#include "Dog.hpp"

Dog::Dog(void):
	AAnimal("Dog")
{
	return ;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF" << std::endl;
	return ;
}
