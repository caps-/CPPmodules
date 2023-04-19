/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:04:39 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 17:13:38 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

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

/* Big ass line  */
# define BAL	"-----------------------------------------------------------"

class	ClapTrap
{
	private:
		std::string	_name;
		int			_hp; //hit points
		int			_ep; //energy points
		int			_ad; //attack damage

	public:
		ClapTrap();
		ClapTrap(std::string Name, int _hp, int _ep, int _ad);
		ClapTrap(ClapTrap const &newClapTrap); //copy constructor
		ClapTrap &operator=(ClapTrap const &copiedClapTrap); //
		~ClapTrap();
		
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		//getters
		int	get_hp(void);
		int	get_ep(void);
		int	get_ad(void);

		//setters
		int	set_hp(void);
		int	set_ep(void);
		int	set_ad(void);
};

#endif
