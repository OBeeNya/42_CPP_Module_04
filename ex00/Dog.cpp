#include "Dog.hpp"

Dog::Dog(void):
	Animal("Dog")
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &src)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog default destructor called" << std::endl;
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
