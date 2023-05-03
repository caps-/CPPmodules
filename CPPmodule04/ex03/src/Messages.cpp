/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 16:10:46 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Messages.hpp"
#include "Colours.hpp"
#include <iostream>
#include <string>

//General, all purpose function to print announcements
void	announce(std::string const &str)
{
	std::cout << BBLK << "\n(" << WHT << str << BBLK << ")" << std::endl;
	std::cout << BBLK << "-" << RST << std::endl;
}

//Announce the type of test we're doing
void	announceTestCategory(std::string const &str)
{
	std::cout << BBLK << BAL << RST << std::endl;
	std::cout << BGGRN << "\t" << BLK << str << BGRN << "\t" << RST << std::endl;
}
//Announce the type of test we're doing
void	announceTest(std::string const &str)
{
	std::cout << BBLK << BAL << RST << std::endl;
	std::cout << BGRN << "[" << GRN << str << BGRN << "]\n" << RST << std::endl;
}

//Announce constructors
void	announceConstructor(const std::string &type)
{
	std::cout << MAG << type << " constructor has been called." << RST 
	<< std::endl;
	return ;
}

void	announceCopy(const std::string &type)
{
	std::cout << MAG << type << " copy constructor has been called." << RST
	<< std::endl;
	return ;
}

void	announceName(std::string const &n)
{
	std::cout << YEL << n << MAG << " name constructor has been called." << RST
	<< std::endl;
	return ;
}

void	announceLearned(std::string const &m)
{
	if (m == "cure")
	{
		std::cout << BOLD << WHT << "\nMateriaSource has learned the "
		<< BMAG << m << WHT << " technique!\n" << RST << std::endl;
		return ;
	}
	std::cout << WHT << BOLD << "\nMateriaSource has learned the "
	<< CYN << m << WHT << " technique!\n" << RST << std::endl;
	return ;
}

void	announceLearning(std::string const &t)
{
	if (t == "cure")
	{
		std::cout << BOLD << WHT << "\nMateriaSource is learning the "
		<< BMAG << t << WHT << " technique!\n" << RST << std::endl;
		return ;
	}
	std::cout << WHT << BOLD << "\nMateriaSource is learning the "
	<< CYN << t << WHT << " technique!\n" << RST << std::endl;
	return ;
}

void	announceUseCure(std::string const &n)
{
	std::cout << GRN << "heals " << YEL << n << RST << std::endl;
	return ;
}

void	announceUseIce(std::string const &n)
{
	std::cout << BLU << "shoots ice" << WHT << " at " << YEL << n << RST
	<< std::endl;
	return ;
}

void	announceCantUse(std::string const &n)
{
	std::cout << YEL << n << RED <<  " only has 4 inventory slots" << RST 
	<< std::endl;
	return ;
}

void	announceType(const std::string &type)
{
	std::cout << MAG << type << " type constructor has been called." << RST
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
	return ;
}

void	pressAnyKey(void)
{
	std::cout << YEL << "\nPress any key to continue... " << RST << std::endl;
	system("read");
}

void	bigAssLine(void)
{
	std::cout << BBLK << BAL << RST << std::endl;
}
