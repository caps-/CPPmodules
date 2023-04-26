/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:46:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/25 20:46:16 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "ColoursAndMacros.hpp"

int	main(void)
{
	std::string	clapName;
	std::string scavName;


	std::cout << B_BLK << BAL << RST << std::endl;
	// create the claptraps
	std::cout << YEL << "Enter figher one's name: " << RST;
	std::cin >> scavName;
	ScavTrap	scav01(scavName);

	std::cout << YEL << "Enter figher two's name: " << RST;
	std::cin >> clapName;
	ClapTrap	clap01(clapName);

	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << "[ FIGHT! ]" << RST << std::endl;
	std::cout << std::endl;

	clap01.attack(scavName);
	scav01.attack(clapName);
	scav01.guardGate();
	scav01.attack(clapName);

	ClapTrap	clap02(clap01);
	clap02.attack(scavName);

	return (0);
}
