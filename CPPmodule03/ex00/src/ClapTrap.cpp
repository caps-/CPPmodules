/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 17:13:50 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << GRN << "Constructor has been called." << RST << std::endl;
}

// hp = hit pints, ep = energy points, ad = attack damage
ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad)
{
	this->_name = name;
	this->_hp = hp;
	this->_ep = ep;
	this->_ad = ad;
	std::cout << YEL "Constructor has been called." << RST << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &newClapTrap)
{
	this->_name = newClapTrap.name;
	this->_hp = newClapTrap.hp;
	this->_ep = newClapTrap.ep;
	this->_ad = newClapTrap.ad;
}

ClapTrap::~ClapTrap()
{
	std::cout << MAG << "Destructor has been called." << RST << std::endl;
}

ClapTrap::operator=(ClapTrap const &copiedClapTrap)
{
	this->_name = copiedClapTrap.name;
	this->_hp = copiedClapTrap.hp;
	this->_ep = copiedClapTrap.ep;
	this->_ad = copiedClapTrap.ad;
	return (*this);
}

void	
