#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class	AAnimal
{

	public:

		AAnimal(void);
		AAnimal(const AAnimal &src);
		AAnimal(const std::string type);
		~AAnimal(void);

		AAnimal	&operator=(const AAnimal &rhs);

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;

	protected:

		std::string	type;

};

#endif
