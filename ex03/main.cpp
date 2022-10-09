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
		ICharacter	*ben = new Character("Ben");
		ICharacter	*jim = new Character("Jim");
		Ice			*ice = new Ice();
		Cure		cure;
		
		ben->equip(ice);
		ben->equip(&cure);

		ben->use(0, *jim);
		ben->use(1, *ben);
		ben->use(2, *jim);

		// delete ice;
		delete ben;
		delete jim;
	}

	return (0);
}
