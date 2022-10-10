#include "Cure.hpp"

Cure::Cure(void):
	AMateria("cure")
{
	std::cout << "Cure default constructor called" << std::endl;
	return ;
}

Cure::Cure(const Cure &src):
	AMateria("cure")
{
	std::cout << "Cure copy constructor called" << std::endl;
	return ;
}

Cure::~Cure(void)
{
	std::cout << "Cure default destructor called" << std::endl;
	return ;
}

Cure	&Cure::operator=(const Cure &rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.getType();
	return (*this);
}

AMateria	*Cure::clone(void) const
{
	AMateria	*cure = new Cure();
	return (cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
