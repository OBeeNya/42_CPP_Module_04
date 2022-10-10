#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"
class	ICharacter;

class	AMateria
{

	protected:

		std::string	type;

	public:

		AMateria(void);
		AMateria(const AMateria &src);
		AMateria(const std::string &type);
		virtual ~AMateria(void);

		AMateria	&operator=(const AMateria &rhs);

		const std::string	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter &target);

};

#endif
