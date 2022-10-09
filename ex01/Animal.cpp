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
<<<<<<< HEAD
=======
	delete this->_brain;
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869
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
<<<<<<< HEAD
	std::cout << "Animal string constructor called" << std::endl;
=======
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869
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
