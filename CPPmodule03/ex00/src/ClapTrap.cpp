/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/20 18:25:16 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* Default constructor  */
ClapTrap::ClapTrap(void) 
	:	_name("blank");
		_hitPoints(10);
		_energyPoints(10);
		_attackDamage(3);
{

	std::cout << GRN << MSG01 << RST << std::endl;
	return ;
}

/* Constructor */
ClapTrap::ClapTrap(std::string name)
	:	_name(name);
	 	_hitPoints(10);
	 	_energyPoints(10);
	 	_attackDamage(3);
{

	std::cout << WHT << name <<  CYN << MSG02 << RST << std::endl;
	return ;
}

/* Destructor */
ClapTrap::~(ClapTrap)
{
	std::cout << WHT << this->name <<  RED << MSG03 << RST << std::endl;
	return ;
}

/****** Attack, damage and repair stuff ******/

//Attack
void	attack(const std::string &target)
{
	if (this->_hitPoints == 0)
	{
		std::cout << WHT << this->_name << MAG << MSG04 << RST << std::endl;
		return ;
	}
	if (this->_energyPoints == 0)
	{
		std::cout << WHT << this->_name << MAG << MSG05 << RST << std::endl;
		return ;
	}
	this->_energyPoints--; //each attack costs -1 energy point
	std::cout << WHT << this->_name << YEL << " attacks " << WHT << target
		<< YEL << " for " << WHT << this->_attackDamage << RST << std::endl;
	
}

//Damage
void	takeDamage(unsigned int ammount)
{
	if (this->_hitPoints == 0)
	{
		std::cout << WHT << this->_name << MAG << MSG06 << RST << std::endl;
		return ;
	}

}
