#include "AMateria.hpp"

AMateria::AMateria(void):
	type("")
{
	std::cout << "AMateria default constructor called" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &src)
{
	std::cout << "AMateria copy constructor called" << std::endl;
	*this = src;
	return ;
}

AMateria::AMateria(const std::string &type):
	type(type)
{
	std::cout << "AMateria string constructor called" << std::endl;
	return ;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria default destructor called" << std::endl;
	return ;
}

AMateria	&AMateria::operator=(const AMateria &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.getType();
	return (*this);
}

const std::string	&AMateria::getType(void) const
{
	return (this->type);
}
