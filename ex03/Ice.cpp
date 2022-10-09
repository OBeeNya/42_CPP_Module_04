#include "Ice.hpp"

Ice::Ice(void):
	AMateria("ice")
{
	std::cout << "Ice default constructor called" << std::endl;
	return ;
}

Ice::Ice(const Ice &src):
	AMateria("ice")
{
	std::cout << "Ice copy constructor called" << std::endl;
	return ;
}

Ice::~Ice(void)
{
	std::cout << "Ice default destructor called" << std::endl;
	return ;
}

Ice	&Ice::operator=(const Ice &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.getType();
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*ice = new Ice();
	return (ice);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << &target << " *" << std::endl;
	return ;
}
