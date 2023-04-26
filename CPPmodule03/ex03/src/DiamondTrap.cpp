/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:52:11 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 16:58:06 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ColoursAndMacros.hpp"

//construct0rz
DiamondTrap::DiamondTrap(void) : FragTrap(), ScavTrap()
{
	this->_HP = FragTrap::_HP;
	this->_EP = ScavTrap::_EP;
	this->_AD = FragTrap::_AD;

	std::cout << "DiamondTrap default constructor called." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) 
	: ClapTrap(name + "_clap_name"),
	FragTrap(name + "_frag_name"),
	ScavTrap(name + "_scav_name"),
	_name(name)
{
	this->_HP = FragTrap::_HP;
	this->_EP = ScavTrap::_EP;
	this->_AD = FragTrap::_AD;

	std::cout << BLU << "A constructor for a DiamondTrap called " << RED << name
		<< BLU << " has been called." << RST << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src) :
	ClapTrap(), 
	FragTrap(),
	ScavTrap()
{
	*this = src;
	std::cout << CYN <<  "DiamondTrap copy constructor called." << RST 
		<< std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &src)
{
	if (this != &src)
	{
		this->_name = src.getName();
		this->_HP = src.getHP();
		this->_EP = src.getEP();
		this->_AD = src.getAD();
	}
	return (*this);
}

//destruct0r
DiamondTrap::~DiamondTrap(void)
{
	std::cout << WHT << this->_name << "'s " << B_BLK
		<< "DiamondTrap destructor called." << RST << std::endl;
}

//functions
void	DiamondTrap::whoAmI(void)
{
	std::cout << BLU << "It's me, " << RED << this->_name << BLU ", the son of "
		<< WHT << ClapTrap::_name << BLU << "!\n" << std::endl;
}
