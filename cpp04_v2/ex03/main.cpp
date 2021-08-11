#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

// int main()
// {
// 	IMateriaSource* src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
//
// 	ICharacter* me = new Character("me");
//
// 	AMateria* tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
//
// 	ICharacter* bob = new Character("bob");
//
// 	me->use(0, *bob);
// 	me->use(1, *bob);
//
// 	delete bob;
// 	delete me;
// 	delete src;
//
// 	return 0;
// }

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp = NULL;
    AMateria* tmp2 = NULL;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << "ICE = " << tmp->getType() << std::endl;

    tmp2 = src->createMateria("cure");
    me->equip(tmp2);
    std::cout << "CURE = " << tmp2->getType() << std::endl;

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);
    std::cout << tmp->getType() << std::endl;
    std::cout << tmp2->getType() << std::endl;


    me->use(0, *bob);
    std::cout << tmp->getType() << std::endl;
    std::cout << tmp2->getType() << std::endl;

    delete bob;
    delete me;
    delete src;

    return 0;
}
