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
		this->_ideas[i] = rhs.getIdeas(i);
	return (*this);
}

std::string	Brain::getIdeas(unsigned int i) const
{
	return (this->_ideas[i]);
}
