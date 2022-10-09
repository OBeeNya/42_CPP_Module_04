#include "Animal.hpp"

Animal::Animal(void):
	type("")
{
	std::cout << "Animal default constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal default destructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

Animal::Animal(const std::string type):
	type(type)
{
	std::cout << "Animal string constructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "SKREEEEE" << std::endl;
	return ;
}
