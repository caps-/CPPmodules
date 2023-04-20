/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:04:39 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/20 18:37:52 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

/* COLOURS! */
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

# define MSG01	"Default constructor has been called."
# define MSG02	" has entered the fight!"
# define MSG03	" has been destroyed!"
# define MSG04	" can't attack, they're dead lol"
# define MSG05	" can't attack, they're out of energy!"
# define MSG06	" can't take any more damage!

/* Big ass line  */
# define BAL	"-----------------------------------------------------------"

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hitPoints; //hit points
		int			_energyPoints; //energy points
		int			_attackDamage; //attack damage

	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src); //copy constructor
		~ClapTrap();
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		//getters
		int			get_hitPoints(void);
		int			get_energyPoints(void);
		int			get_attackDamage(void);
		std::string	getName;

		//setters
		int	set_hitPoints(void);
		int	set_energyPoints(void);
		int	set_attackDamage(void);
};

#endif
