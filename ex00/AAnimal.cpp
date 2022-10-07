#include "AAnimal.hpp"

AAnimal::AAnimal(void):
	type("")
{
	return ;
}

AAnimal::AAnimal(const AAnimal &src)
{
	*this = src;
	return ;
}

AAnimal::~AAnimal(void)
{
	return ;
}

AAnimal	&AAnimal::operator=(const AAnimal &rhs)
{
	this->type = rhs.type;
	return (*this);
}

AAnimal::AAnimal(const std::string type):
	type(type)
{
	return ;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
