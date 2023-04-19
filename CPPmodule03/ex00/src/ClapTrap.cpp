/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:02:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 17:46:29 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#define MSG01	"Default constructor has been called."
#define MSG02	"Constructor has been called."

ClapTrap::ClapTrap() :	_name();
						_hitPoints(10);
						_energyPoints(10);
						_attackDamage(3);
{

	std::cout << GRN << MSG01 << RST << std::endl;
}

ClapTrap::ClapTrap() :	_name(name);
						_hitPoints(10);
						_energyPoints(10);
						_attackDamage(3);
{

	std::cout << RED << MSG02 << RST << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << MAG << "Destructor has been called." << RST << std::endl;
}
