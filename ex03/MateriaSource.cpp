#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void):
	_materias{NULL, NULL, NULL, NULL}
{
	std::cout << "MateriaSource default constructor called" << std::endl;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
	}
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if  (this->_materias[i])
			delete this->_materias[i];
	}
	return ;
}

MateriaSource	&MateriaSource::operator=(const MateriaSource &rhs)
{
	if (this == &rhs)
		return (*this);
	*this = rhs;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias && this->_materias[i])
			delete this->_materias[i];
	}
	for (int i = 0; i < 4; i++)
	{
		if (rhs._materias[i])
			this->_materias[i] = rhs._materias[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (!this->_materias[0])
		this->_materias[0] = m;
	else if (!this->_materias[1])	
		this->_materias[1] = m;
	else if (!this->_materias[2])	
		this->_materias[2] = m;
	else if (!this->_materias[3])	
		this->_materias[3] = m;
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	if (!type.compare("ice"))
	{
		AMateria *ice = new Ice();
		return (ice);
	}
	if (!type.compare("cure"))
	{
		AMateria *cure = new Cure();
		return (cure);
	}
	return (0);
}
