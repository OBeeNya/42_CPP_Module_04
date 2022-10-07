#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
# include "Brain.hpp"

class	Animal
{

	public:

		Animal(void);
		Animal(const Animal &src);
		Animal(const std::string type);
		~Animal(void);

		Animal	&operator=(const Animal &rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	protected:

		std::string	type;

	private:

		Brain	*_brain;

};

#endif
