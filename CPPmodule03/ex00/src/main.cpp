#include "ClapTrap.hpp"

int	main(void)
{
	std::string	name01;
	std::string name02;

	// create the claptraps
	std::cout << "Enter figher one's name: ";
	std::cin >> name01;
	ClapTrap	trap01(name01);
	std::cout << "Enter figher two's name: ";
	std::cin >> name02;
	ClapTrap	trap02(name02);
	std::cout << std::endl;

	trap01.attack(name02);
	trap02.takeDamage(3);
	trap02.attack(name01);
	trap01.takeDamage(3);
	trap01.attack(name02);
	trap02.takeDamage(3);
	trap01.attack(name02);
	trap02.takeDamage(3);
	trap02.beRepaired(42);
	trap02.attack(name01);
	trap01.takeDamage(3);
	trap02.attack(name01);
	trap01.takeDamage(3);

	return (0);
}
