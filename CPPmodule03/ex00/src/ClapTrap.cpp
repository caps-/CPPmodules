/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/17 22:34:35 by pwhittin         ###   ########.fr       */
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
	this->name = name;
	this->hp = hp;
	this->ep = ep;
	this->ad = ad;
	std::cout << YEL "Constructor has been called." << RST << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap01)
{
	this->name = ClapTrap01.name;
	this->hp = ClapTrap01.hp;
	this->ep = ClapTrap01.ep;
	this->ad = ClapTrap01.ad;
}

ClapTrap::~ClapTrap()
{
	std::cout << MAG << "Destructor has been called." << RST << std::endl;
}

ClapTrap::operator=(ClapTrap const &ClapTrap2)
{
	this->name = ClapTrap2.name;
	this->hp = ClapTrap2.hp;
	this->ep = ClapTrap2.ep;
	this->ad = ClapTrap2.ad;
	return (*this);
}

void	
