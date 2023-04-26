/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:45:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 17:39:40 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ColoursAndMacros.hpp"

/* Constructors and Destructor */
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
};

ClapTrap::ClapTrap(std::string name)
	:	_name(name),
		_HP(10),
		_EP(10),
		_AD(3)
{
	std::cout << name << "'s constructor called." << std::endl;
	std::cout << std::endl;
};

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << YEL << "\nClapTrap copy constructor called for our old mate "
		<< WHT << src._name << YEL << "." << RST << "\n" << std::endl;
}

ClapTrap &	ClapTrap::operator=(ClapTrap const & src) {
	if (this != &src) 
	{
		this->_name = src.getName();
		this->_HP = 10;
		this->_EP = 10;
		this->_AD = 3;
	}
	return (*this);
}

std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

ClapTrap::~ClapTrap()
{
	std::cout << WHT << this->_name << "'s" << B_BLK 
		<< " ClapTrap destructor called." << RST << std::endl;
}


void	ClapTrap::attack(const std::string &target)
{
	if (this->_EP == 0)
	{
		std::cout << this->_name << RED 
			<< " has 0 Energy Points and can't attack!" << std::endl;
		std::cout << B_BLK << "______" << RST << std::endl;
		std::cout << std::endl;
	}
	else
	{
		this->_EP -= 1;
		std::cout << WHT << this->_name << GRN <<  " attacks " << WHT << target 
			<< GRN << " with " << YEL << this->_AD << GRN
			<< " points of attack damage!" << std::endl;
		std::cout << WHT << this->_name << CYN << " has " << YEL << this->_EP
			<< CYN " EP left." << std::endl;
		std::cout << B_BLK << "______" << RST << std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_HP -= amount;
	std::cout << WHT << this->_name << MAG << " takes " << YEL << amount << MAG 
		<< " damage!" << RST << std::endl;
	std::cout << WHT << this->_name << MAG << " has " << YEL << this->_HP << MAG
		<< " HP left." << std::endl;
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_EP == 0)
	{
		std::cout << this->_name << " has 0 Energy Points and can't repair!"
			<< std::endl;
	}
	else
	{
		this->_EP -= 1;
		this->_HP += amount;
		std::cout << CYN << this->_name << " has repaired themselves with " 
			<< YEL << amount << CYN << " HP, giving them " << YEL << this->_HP 
			<<  CYN " total HP!" << RST << std::endl;
		std::cout << std::endl;
	}
}

void	ClapTrap::setEP(unsigned int amount)
{
	this->_EP = amount;
	std::cout << BLU << "** setting " << WHT << this->_name 
		<< "'s " << BLU << "energy points to " << amount << BLU << " **\n"
		<< RST << std::endl;
}
