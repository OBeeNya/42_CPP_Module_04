#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int	main(void)
{
	// {
	// 	Ice	ice1;
	// 	AMateria	*ice2 = ice1.clone();

	// 	std::cout << ice2->getType() << std::endl;

	// 	delete ice2;
	// }

	{
		std::cout << std::endl;
		std::cout << " *** Creating 2 characters and 2 materias *** " << std::endl;
		ICharacter	*ben = new Character("Ben");
		ICharacter	*jim = new Character("Jim");
		Ice			*ice = new Ice();
		Cure		cure;
		
		std::cout << std::endl;
		std::cout << " *** Equipping the 2 materias *** " << std::endl;
		ben->equip(ice);
		ben->equip(&cure);

		std::cout << std::endl;
		std::cout << " *** Using the 2 materias *** " << std::endl;
		ben->use(0, *jim);
		ben->use(1, *ben);

		std::cout << std::endl;
		std::cout << " *** Trying to use an empty materia slot *** " << std::endl;
		ben->use(2, *jim);

		std::cout << std::endl;
		std::cout << " *** Trying to use an unequipped materia *** " << std::endl;
		ben->unequip(0);
		ben->use(0, *jim);

		std::cout << std::endl;
		std::cout << " *** Cleaning *** " << std::endl;
		delete ice;
		delete ben;
		delete jim;

		std::cout << std::endl;
	}

	return (0);
}
