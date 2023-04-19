/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:44:02 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 17:46:31 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	system("clear");
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << "[  CLAPTRAP  ]" << RST << std::endl;
	std::cout << std::endl;

	ClapTrap	ClapTrap01("ClapTrap 01");
	
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << GRN << "[Let's fight!] " << RST << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	
//	ClapTrap01.attack("ClapTrap 02");
	return (0);
}
