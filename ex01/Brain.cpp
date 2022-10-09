#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain default destructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &rhs)
{
	if (this == &rhs)
		return (*this);
	for (int i = 0; i < 100; i++)
<<<<<<< HEAD
		this->_ideas[i] = rhs.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(unsigned int i) const
{
	if (i < 0 || i >= 100)
		std::cout << "Error" << std::endl << "Index out of range" << std::endl;
	return (this->_ideas[i]);
}

void	Brain::setIdea(unsigned int i, std::string idea)
{
	if (i >= 0 && i < 100)
		this->_ideas[i] = idea;
	else
		std::cout << "Error" << std::endl << "Index out of range" << std::endl;
}
=======
		this->_ideas[i] = rhs.getIdeas(i);
	return (*this);
}

std::string	Brain::getIdeas(unsigned int i) const
{
	return (this->_ideas[i]);
}
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869
