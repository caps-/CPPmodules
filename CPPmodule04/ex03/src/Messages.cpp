/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 18:37:53 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Messages.hpp"
#include "Colours.hpp"
#include <iostream>
#include <string>

//General, all purpose function to print announcements
void	announce(std::string const &str)
{
	std::cout << BMAG << "\n[" << RED << str << BMAG << "]" << std::endl;
	std::cout << BBLK << "-" << RST << std::endl;
}

//Announce the type of test we're doing
void	announceTest(std::string const &str)
{
	std::cout << BBLK << BAL << RST << std::endl;
	std::cout << BGRN << "[" << GRN << str << BGRN << "]" << RST << std::endl;
}

//Announce constructors
void	announceConstructor(const std::string &type)
{
	std::cout << CYN << type << "constructor has been called." << RST 
		<< std::endl;
	return ;
}

void	announceCopy(const std::string &type)
{
	std::cout << BMAG << type << " copy constructor has been called." << RST
		<< std::endl;
	return ;
}

void	announceType(const std::string &type)
{
	std::cout << BMAG << type << " type constructor has been called." << RST
		<< std::endl;
	return ;
}

void	announceDeep(const std::string &type)
{
	std::cout << MAG << type << " has been deep copied. DEEEEEEEEP." << RST
		<< std::endl;
	return ;
}

void	announceDestructor(const std::string &type)
{
	std::cout << BBLK << type << " destructor has been called." << RST
		<< std::endl;
	return ;
}

void	announceUse(const std::string &target)
{
	std::cout << YEL << "*An unknown Materia is being used againt" << target
		<< "*" << RST << std::endl;
}

void	bigAssLine(void)
{
	std::cout << BBLK << BAL << RST << std::endl;
}
