#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"

class	Cat:
	public AAnimal
{

		public:

		Cat(void);
		Cat(const Cat &src);
		~Cat(void);

		Cat	&operator=(const Cat &rhs);

		virtual void	makeSound(void) const;

};

#endif
