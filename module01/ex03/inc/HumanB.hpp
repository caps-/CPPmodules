/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:17:10 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 15:43:34 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

/* One thing in C++ that I'd never come across before was using & at the end of
 * a variable. Coming from C I'm used to always reading the & character as
 * returning the address of something, but in C++ if you stick it on the END of
 * a variable it   */
class	HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB(std::string _name);
		~HumanB();
		Weapon	getWeapon(void);
		void	setWeapon(Weapon &_weapon);
		void	attack(void);

};

#endif
