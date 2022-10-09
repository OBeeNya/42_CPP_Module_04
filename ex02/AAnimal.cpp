#include "AAnimal.hpp"

AAnimal::AAnimal(void):
	type("")
{
	std::cout << "AAnimal default constructor called" << std::endl;
	return ;
}

AAnimal::AAnimal(const AAnimal &src)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal default destructor called" << std::endl;
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return (*this);
}

AAnimal::AAnimal(const std::string type):
	type(type)
{
	std::cout << "AAnimal string constructor called" << std::endl;
	return ;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}

void	AAnimal::makeSound(void) const
{
	std::cout << "SKREEEEE" << std::endl;
	return ;
}
