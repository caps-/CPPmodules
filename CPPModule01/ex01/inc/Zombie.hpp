/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:45:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/21 20:17:17 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <stdio.h>
#include <string>

/* Colours for the output. Not going to use them all but I've put them here 
 * any way just in case. */
# define RST   "\033[0m" //reset colour
# define BLK   "\033[30m"
# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define B_BLK "\033[1m\033[30m" //bold colours
# define b_RED "\033[1m\033[31m"
# define b_GRN "\033[1m\033[32m"
# define b_YEL "\033[1m\033[33m"
# define b_BLU "\033[1m\033[34m"
# define b_MAG "\033[1m\033[35m"
# define b_CYN "\033[1m\033[36m"
# define b_WHT "\033[1m\033[37m"

/* Error message */
# define MSG_ERR	"A zombie horde needs more than 1 zombie, try again!"

/* Zombie messages */
# define MSG01	"Zombie created."
# define MSG02	" has risen from the dead!"
# define MSG03	"*dying noises*"
# define MSG04	"BraiiiiiiinnnzzzZ..."

/* Big ass line  */
# define BAL	"-----------------------------------------------------------"


class Zombie
{
	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();

		void	setName(std::string name);
		void	announce(void);
		void	destroyZombie(void);
};

/* Zombie horde function */
Zombie* zombieHorde(int N, std::string name);

#endif
