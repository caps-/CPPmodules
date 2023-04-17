/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:44:02 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/17 22:34:31 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	system("clear");
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << "[  CLAPTRAP  ]" << RST << std::endl;
	std::cout << std::endl;

	ClapTrap	ClapTrap01("ClapTrap 01", 10, 8, 3);
	ClapTrap	ClapTrap02("ClapTrap 02", 8, 10, 1);
	
	ClapTrap01.attack("a chair");
	return (0);
}
