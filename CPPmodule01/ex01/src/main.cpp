/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:45:13 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/21 20:23:15 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie		*zomb;
	int			number = 0;
	std::string	name;

	system("clear");
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << "Name: " << MAG;
	std::cin >> name;
	std::cout << RST << "Number of zombies: " << MAG;
	std::cin >> number;
	std::cout << B_BLK << BAL << RST << std::endl;
	zomb = zombieHorde(number, name);
	delete[] zomb;
//	free(zomb);
}
