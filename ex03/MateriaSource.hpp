#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "Ice.hpp"
# include "Cure.hpp"

class	MateriaSource:
	public IMateriaSource
{

	private:

		AMateria	*_materias[4];

	public:

		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		~MateriaSource(void);

		MateriaSource	&operator=(const MateriaSource &rhs);

		virtual void		learnMateria(AMateria *m);
		virtual AMateria	*createMateria(const std::string &type);

};

#endif
