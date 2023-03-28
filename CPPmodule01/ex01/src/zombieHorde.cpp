/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:49:43 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/21 20:12:07 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


/* https://cplusplus.com/reference/new/operator%20new[]/ */
Zombie	*zombieHorde(int N, std::string name)
{
	if (N < 1)
	{
		std::cout << RED << MSG_ERR << RST << std::endl;
		exit (-1);
	}

	Zombie *horde;

//	horde = (Zombie *)malloc(sizeof(Zombie) * N);
	horde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}
