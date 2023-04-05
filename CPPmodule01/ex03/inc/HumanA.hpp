/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:05:44 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/05 14:39:52 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

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
