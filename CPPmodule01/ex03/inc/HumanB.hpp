/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 17:17:10 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/05 14:44:13 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.hpp"

/* This human won't always have a weapon and doesn't take one via it's
 * constructor like Human A, so whenever we give them one we'll use a pointer to
 * keep it on the stack so we can change it to a different one easily. */
class	HumanB
{
	private:
		std::string	_name;
		Weapon		*_weapon;

	public:
		HumanB(std::string _name);
		~HumanB();
		Weapon	getWeapon(void);
		void	setWeapon(Weapon &_weapon);
		void	attack(void);

};

#endif
