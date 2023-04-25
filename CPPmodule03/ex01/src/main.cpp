/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:46:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/25 17:55:47 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ColoursAndMacros.hpp"

int	main(void)
{
	std::string	name01;
	std::string name02;

	std::cout << B_BLK << BAL << RST << std::endl;
	// create the claptraps
	std::cout << YEL << "Enter figher one's name: " << RST;
	std::cin >> name01;
	ClapTrap	trap01(name01);
	std::cout << YEL << "Enter figher two's name: " << RST;
	std::cin >> name02;
	ClapTrap	trap02(name02);
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << "[ FIGHT! ]" << RST << std::endl;

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

	trap01.setEP(0);
	trap01.attack(name02);

	return (0);
}
