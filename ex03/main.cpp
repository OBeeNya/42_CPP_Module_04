#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void)
{
	// {
	// 	std::cout << std::endl;
	// 	std::cout << " *** Trying to clone an ice materia and checking its type *** " << std::endl;
	// 	Ice	ice3;
	// 	AMateria	*ice4 = ice3.clone();
	// 	std::cout << ice4->getType() << std::endl;
	// 	delete ice4;
	
	// 	std::cout << std::endl;
	// 	std::cout << " *** Creating 2 characters and 2 materias *** " << std::endl;
	// 	ICharacter	*ben = new Character("Ben");
	// 	ICharacter	*jim = new Character("Jim");
	// 	Ice			*ice = new Ice();
	// 	Cure		*cure = new Cure();
		
	// 	std::cout << std::endl;
	// 	std::cout << " *** Equipping the 2 materias *** " << std::endl;
	// 	ben->equip(ice);
	// 	ben->equip(cure);

	// 	std::cout << std::endl;
	// 	std::cout << " *** Using the 2 materias *** " << std::endl;
	// 	ben->use(0, *jim);
	// 	ben->use(1, *ben);

	// 	std::cout << std::endl;
	// 	std::cout << " *** Trying to use an empty materia slot *** " << std::endl;
	// 	ben->use(2, *jim);

	// 	std::cout << std::endl;
	// 	std::cout << " *** Trying to use an unequipped materia *** " << std::endl;
	// 	ben->unequip(0);
	// 	ben->use(0, *jim);

	// 	std::cout << std::endl;
	// 	std::cout << " *** Equipping 4 cure materias then trying to equip a ice materia and use it *** " << std::endl;
	// 	Ice			*ice2 = new Ice();
	// 	Cure		*cure2 = new Cure();
	// 	Cure		*cure3 = new Cure();
	// 	Cure		*cure4 = new Cure();
	// 	ben->equip(cure2);
	// 	ben->equip(cure3);
	// 	ben->equip(cure4);
	// 	ben->equip(ice2);
	// 	ben->use(2, *jim);
	// 	ben->unequip(0);
	// 	ben->unequip(1);
	// 	ben->unequip(2);
	// 	ben->unequip(3);

	// 	std::cout << std::endl;
	// 	std::cout << " *** Equipping a materia before deleting a character to make sure it gets deleted too *** " << std::endl;
	// 	jim->equip(ice);

	// 	std::cout << std::endl;
	// 	std::cout << " *** Cleaning *** " << std::endl;
	// 	delete cure;
	// 	delete cure2;
	// 	delete cure3;
	// 	delete cure4;
	// 	delete ice2;
	// 	delete ben;
	// 	delete jim;
	// }

	{
		std::cout << std::endl;
		std::cout << " *** Test from the subject *** " << std::endl;
		IMateriaSource	*src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter	*me = new Character("me");

		AMateria	*tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter	*bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}

	std::cout << std::endl;

	return (0);
}
