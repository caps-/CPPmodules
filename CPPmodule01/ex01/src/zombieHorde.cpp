/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:49:43 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 17:46:46 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/* https://cplusplus.com/reference/new/operator%20new[]/ 
 * 
 * We're using the new operator here so we can create a dynamic array of N
 * zombies at runtime as opposed to compiletime. Once the array's been done
 * we go through and give each zombie in the array it's name and then get have
 * it announce itself before finally returning the horde pointer. */

Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1) //print error message 
	{
		std::cout << RED << MSG_ERR << RST << std::endl;
		exit (-1);
	}

	Zombie *horde = new Zombie[N]; //create dynamic array of N zombies @ runtime
	
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde); //returns a pointer to the 1st zombie
}
