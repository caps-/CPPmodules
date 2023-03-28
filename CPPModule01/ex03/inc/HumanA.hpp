/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:05:44 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 15:19:21 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

/* One thing in C++ that I'd never come across before was using & at the end of
 * a variable. Coming from C I'm used to always reading the & character as
 * returning the address of something, but in C++ if you stick it on the END of
 * a variable it   */
class	HumanA
{
	private:
		std::string	_name;
		Weapon		&_weapon;

	public:
		//constructor and destructor
		HumanA(std::string _name, Weapon &weapon);
		~HumanA();
		//member functions
		Weapon		getWeapon(void);
		void		attack(void);
};

#endif
