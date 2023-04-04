/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:45:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 17:50:42 by pwhittin         ###   ########.fr       */
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
# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define MAG   "\033[35m"
# define WHT   "\033[37m"
# define B_BLK "\033[1m\033[30m" //bold colours

/* Error message */
# define MSG_ERR	"What? Enter a number, a digit, not characters. Exiting."

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
