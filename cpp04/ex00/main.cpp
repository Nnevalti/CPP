#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Zote.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}

// int			main(void)
// {
// 	std::cout << "\nConstructors :" << std::endl;
// 	Sorcerer	soulMaster("Soul Master", "Leader of the Soul Sanctum");
// 	Victim		tiso("Tiso");
// 	Peon		huskBully("Husk Bully");
// 	Zote		zote("Zote");
//
// 	// Copy function
// 	Sorcerer soulMasterCopy = soulMaster;
// 	Victim tisoCopy = tiso;
// 	Peon huskBullyCopy = huskBully;
// 	Zote zoteCopy = zote;
//
// 	std::cout << "\nOriginal std::cout :" << std::endl;
// 	std::cout << soulMaster;
// 	std::cout << tiso;
// 	std::cout << huskBully;
// 	std::cout << zote;
//
// 	soulMasterCopy.setName("Soul Master copy");
// 	tisoCopy.setName("Tiso Copy");
// 	huskBullyCopy.setName("Husk Bully Copy");
// 	zoteCopy.setName("Zote Copy");
//
// 	std::cout << "\nCopy std::cout :" << std::endl;
// 	std::cout << soulMasterCopy;
// 	std::cout << tisoCopy;
// 	std::cout << huskBullyCopy;
// 	std::cout << zoteCopy;
//
// 	std::cout << "\nPolymorph :" << std::endl;
// 	// Polymorphed
// 	soulMaster.polymorph(tiso);
// 	soulMaster.polymorph(huskBully);
// 	soulMaster.polymorph(zote);
//
// 	std::cout << "\nDestructors :" << std::endl;
// 	return (0);
// }
