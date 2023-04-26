/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:54:33 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 17:48:51 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "ColoursAndMacros.hpp"

/* Constructors and Destructor */
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "A constructor for a ScavTrap named " << RED <<  name << RST 
		<< " has also been called!" << std::endl;
	std::cout << std::endl;
	this->_HP = 100;
	this->_EP = 50;
	this->_AD = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << WHT << this->_name << "'s " 
		<< B_BLK << "ScavTrap destructor called." << RST << std::endl;
}

void	ScavTrap::attack(std::string &target)
{
	if (this->_EP == 0)
	{
		 std::cout << WHT << this->_name << RED
			 << " has 0 Energy Points and can't attack!" << std::endl;
		std::cout << B_BLK << "______" << RST << std::endl;
		std::cout << std::endl;
	}
	else
	{
		this->_EP -= 1;
		std::cout << WHT << this->_name << MAG << " stikes " << WHT << target
			<< MAG << " with " << YEL << this->_AD << MAG 
			<< " points of attack damage!" << std::endl;
		std::cout << WHT << this->_name << CYN << " has " << YEL << this->_EP
			<< CYN " Energy Points left." << std::endl;
		std::cout << B_BLK << "______" << RST << std::endl;
	}
}
void	ScavTrap::guardGate()
{
	std::cout << std::endl;
	std::cout << WHT << this->_name << BLU << " is now in Gate keeper mode!" 
		<< RST << std::endl;
		std::cout << B_BLK << "______" << RST << std::endl;
		std::cout << std::endl;
}
