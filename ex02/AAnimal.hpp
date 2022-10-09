#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <string>
# include <iostream>

class	AAnimal
{

	public:

		AAnimal(void);
		AAnimal(const AAnimal &src);
		AAnimal(const std::string type);
		virtual ~AAnimal(void);

		AAnimal	&operator=(const AAnimal &rhs);

		virtual void		makeSound(void) const;
		std::string			getType(void) const;
		virtual std::string	getIdea(unsigned int i) = 0;
		virtual void		setIdea(unsigned int i, std::string idea) = 0;

	protected:

		std::string	type;

};

#endif
