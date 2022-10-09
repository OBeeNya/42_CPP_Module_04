#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>
<<<<<<< HEAD
=======
# include "Brain.hpp"
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

class	Animal
{

	public:

		Animal(void);
		Animal(const Animal &src);
		Animal(const std::string type);
<<<<<<< HEAD
		virtual ~Animal(void);

		Animal	&operator=(const Animal &rhs);

		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		virtual std::string	getIdea(unsigned int i) = 0;
		virtual void		setIdea(unsigned int i, std::string idea) = 0;
=======
		~Animal(void);

		Animal	&operator=(const Animal &rhs);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

	protected:

		std::string	type;

<<<<<<< HEAD
=======
	private:

		Brain	*_brain;

>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869
};

#endif
