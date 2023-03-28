/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:39:42 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/21 16:41:02 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie; //init a new zombie, Zombie class

	system("clear");
	randomChump("Forrest Chump"); //make a new randomChump dude
	zombie = newZombie("Undead Steve"); //make a new zombie
	zombie->announce();
	delete zombie;
	return (0);	
}
