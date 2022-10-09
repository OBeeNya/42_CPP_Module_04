#include "Dog.hpp"

Dog::Dog(void):
	Animal("Dog"),
	_brain(new Brain())
{
	std::cout << "Dog default constructor called" << std::endl;
	return ;
}

Dog::Dog(const Dog &src):
	_brain(new Brain())
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog::~Dog(void)
{
	delete this->_brain;
	std::cout << "Dog default destructor called" << std::endl;
	return ;
}

Dog	&Dog::operator=(const Dog &rhs)
{
	if (this == &rhs)
		return (*this);
	delete this->_brain;
	this->_brain = new Brain(rhs.getBrain());
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOOF WOOF" << std::endl;
	return ;
}

Brain	Dog::getBrain(void) const
{
	return (*this->_brain);
}
<<<<<<< HEAD

void	Dog::setIdea(unsigned int i, std::string idea)
{
	this->_brain->setIdea(i, idea);
}

std::string	Dog::getIdea(unsigned int i)
{
	return (this->_brain->getIdea(i));
}
=======
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869
