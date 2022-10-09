#include "Cat.hpp"

Cat::Cat(void):
	AAnimal("Cat"),
	_brain(new Brain())
{
	std::cout << "Cat default constructor called" << std::endl;
	return ;
}

Cat::Cat(const Cat &src):
	_brain(new Brain())
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat::~Cat(void)
{
	delete this->_brain;
	std::cout << "Cat default destructor called" << std::endl;
	return ;
}

Cat	&Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return (*this);
	delete this->_brain;
	this->_brain = new Brain(rhs.getBrain());
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MEOW" << std::endl;
	return ;
}

Brain	Cat::getBrain(void) const
{
	return (*this->_brain);
}

void	Cat::setIdea(unsigned int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

std::string	Cat::getIdea(unsigned int i)
{
	return (this->_brain->getIdea(i));
}
