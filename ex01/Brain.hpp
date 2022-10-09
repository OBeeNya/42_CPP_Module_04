#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class	Brain
{

	public:

		Brain(void);
		Brain(const Brain &src);
		~Brain(void);

		Brain	&operator=(const Brain &rhs);

		std::string	getIdea(unsigned int i) const;
		void		setIdea(unsigned int i, std::string idea);

	private:

		std::string	_ideas[100];

};

#endif
