#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog:
	public Animal
{

	public:

		Dog(void);
		Dog(const Dog &src);
<<<<<<< HEAD
		virtual ~Dog(void);

		Dog	&operator=(const Dog &rhs);

		virtual void		makeSound(void) const;
		Brain				getBrain(void) const;
		virtual std::string	getIdea(unsigned int i);
		virtual void		setIdea(unsigned int i, std::string idea);
=======
		~Dog(void);

		Dog	&operator=(const Dog &rhs);

		virtual void	makeSound(void) const;
		Brain			getBrain(void) const;
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

	private:

		Brain	*_brain;

};

#endif
