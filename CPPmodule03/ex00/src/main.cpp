/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:44:02 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/20 18:37:48 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	system("clear");
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << "[  CLAPTRAP  ]" << RST << std::endl;
	std::cout << std::endl;

	//let's set up some names
	std::string	trapName01 = "Clap";
	std::string	trapName02 = "Trap";

	//spawn in our combatants
	ClapTrap	trap01(trapName01);
	ClapTrap	trap02(trapName02);

	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << GRN << "[Let's fight!] " << RST << std::endl;
	std::cout << std::endl;

	trap01.attack(trapName01);

//	ClapTrap01.attack("ClapTrap 02");
	return (0);
}
