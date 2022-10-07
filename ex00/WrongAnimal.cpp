#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):
	type("WrongAnimal")
{
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "SKREEEEEE" << std::endl;
	return ;
}
