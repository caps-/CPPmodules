/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 16:32:39 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 15:40:17 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	//Constructor init lists bwoooaaaaaaaaaaayyyyyyy!
}

HumanA::~HumanA()
{
	//Destructor
}

void	HumanA::attack(void)
{
	std::cout << RED << this->_name << " attacks with their " << 
		this->_weapon.getType() << RST << std::endl;

}
