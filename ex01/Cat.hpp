#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Cat:
	public Animal
{

	public:

		Cat(void);
		Cat(const Cat &src);
<<<<<<< HEAD
		virtual ~Cat(void);
=======
		~Cat(void);
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

		Cat	&operator=(const Cat &rhs);

		virtual void		makeSound(void) const;
		Brain				getBrain(void) const;
<<<<<<< HEAD
		virtual std::string	getIdea(unsigned int i);
		virtual void		setIdea(unsigned int i, std::string idea);
=======
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

	private:

		Brain	*_brain;

};

#endif
