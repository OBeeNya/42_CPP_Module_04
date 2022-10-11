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
