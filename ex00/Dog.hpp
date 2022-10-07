#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"

class	Dog:
	public AAnimal
{

	public:

		Dog(void);
		Dog(const Dog &src);
		~Dog(void);

		Dog	&operator=(const Dog &rhs);

		virtual void	makeSound(void) const;

};

#endif