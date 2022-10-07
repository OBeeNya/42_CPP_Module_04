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

		std::string	getIdeas(unsigned int i) const;

	private:

		std::string	_ideas[100];

};

#endif
