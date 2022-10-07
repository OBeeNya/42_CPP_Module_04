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
		~Cat(void);

		Cat	&operator=(const Cat &rhs);

		virtual void	makeSound(void) const;
		Brain			getBrain(void) const;

	private:

		Brain	*_brain;

};

#endif
