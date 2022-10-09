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

<<<<<<< HEAD
		std::string	getIdea(unsigned int i) const;
		void		setIdea(unsigned int i, std::string idea);
=======
		std::string	getIdeas(unsigned int i) const;
>>>>>>> 6ef714d6a892af0e2e2fd7ce9bb5eabd44628869

	private:

		std::string	_ideas[100];

};

#endif
