#ifndef CAT_HPP
# define CAT_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class	Cat:
	public AAnimal
{

	public:

		Cat(void);
		Cat(const Cat &src);
		virtual ~Cat(void);

		Cat	&operator=(const Cat &rhs);

		virtual void		makeSound(void) const;
		Brain				getBrain(void) const;
		virtual std::string	getIdea(unsigned int i);
		virtual void		setIdea(unsigned int i, std::string idea);

	private:

		Brain	*_brain;

};

#endif
