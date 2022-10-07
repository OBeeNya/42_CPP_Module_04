#include "Cat.hpp"

Cat::Cat(void):
	Animal("Cat")
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &src)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat default destructor called" << std::endl;
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
