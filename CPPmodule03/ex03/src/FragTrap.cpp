/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 12:32:03 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 18:10:05 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ColoursAndMacros.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_HP = 100;
	this->_EP = 100;
	this->_AD = 30;

	std::cout << WHT << "A constructor for a FragTrap named " << RED << name 
		<< WHT << " been called." << RST << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap()
{
	std::cout << YEL << "FragTrap copy constructor called." << RST << std::endl;
	*this = src;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	if (this != &src)
	{
		this->_name = "ClapTrap copied to FragTrap";
		this->_HP = 100;
		this->_EP = 100;
		this->_AD = 30;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << WHT << this->_name << "'s" << B_BLK 
		<< " FragTrap destructor called." << RST << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << B_WHT << "\n" << this->_name << B_BLU
		<< " laughs and offers everyone a high five =D" << RST << "\n" 
		<< std::endl;
}
