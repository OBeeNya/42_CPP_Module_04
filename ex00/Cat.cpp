#include "Cat.hpp"

Cat::Cat(void):
	AAnimal("Cat")
{
	return ;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW" << std::endl;
	return ;
}
