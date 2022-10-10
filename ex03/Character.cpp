#include "Character.hpp"

Character::Character(void):
	ICharacter(),
	_materias{NULL, NULL, NULL, NULL}
{
	std::cout << "Character default constructor called" << std::endl;
	return ;
}

Character::Character(const Character &src):
	_name(src.getName())
{
	std::cout << "Character copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src._materias[i])
			this->_materias[i] = src._materias[i]->clone();
	}
	return ;
}

Character::Character(const std::string name):
	_name(name),
	_materias{NULL, NULL, NULL, NULL}
{
	std::cout << "Character string constructor called" << std::endl;
	return ;
}

Character::~Character(void)
{
	std::cout << "Character default destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materias[i])
			delete this->_materias[i];
	}
	return ;
}

Character	&Character::operator=(const Character &rhs)
{
	if (this == &rhs)
		return (*this);
	this->_name = rhs.getName();
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

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (!this->_materias[0])
		this->_materias[0] = m;
	else if (!this->_materias[1] && this->_materias[0]->getType() != m->getType())	
		this->_materias[1] = m;
	else if (!this->_materias[2] && this->_materias[0]->getType() != m->getType() \
		&& this->_materias[1]->getType() != m->getType())	
		this->_materias[2] = m;
	else if (!this->_materias[3] && this->_materias[0]->getType() != m->getType() \
		&& this->_materias[1]->getType() != m->getType() \
		&& this->_materias[2]->getType() != m->getType())	
		this->_materias[3] = m;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		this->_materias[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && this->_materias[idx])
		this->_materias[idx]->use(target);
}
