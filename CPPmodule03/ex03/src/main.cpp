/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:46:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 18:11:06 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"
#include "ColoursAndMacros.hpp"

int	main(void)
{
	std::string	clapName;
	std::string scavName;
	std::string	diamondName;


	std::cout << B_BLK << BAL << RST << std::endl;
	// create the claptraps
	std::cout << YEL << "Enter figher one's name: " << RST;
	std::cin >> scavName;
	ScavTrap	scav01(scavName);

	std::cout << YEL << "Enter figher two's name: " << RST;
	std::cin >> clapName;
	ClapTrap	clap01(clapName);

	std::cout << YEL << "\nEnter figher three's name: " << RST;
	std::cin >> diamondName;
	DiamondTrap	diamond01(diamondName);

	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << "[ FIGHT! ]" << RST << std::endl;
	std::cout << std::endl;

	diamond01.whoAmI();
	clap01.attack(scavName);
	diamond01.attack(scavName);
	std::cout << WHT << "\n" << scavName << BLU << " using " << WHT << clapName 
		<< "'s " << BLU << "attack damage here .." << RST << std::endl;
	scav01.takeDamage(clap01.getAD());
	std::cout << WHT << scavName << BLU << " taking " << WHT << diamondName 
		<< "'s " << BLU << "attack damage here .." << RST << std::endl;
	scav01.takeDamage(diamond01.getAD());
	diamond01.attack(scavName);
	diamond01.highFivesGuys();
	diamond01.guardGate();

	return (0);
}
