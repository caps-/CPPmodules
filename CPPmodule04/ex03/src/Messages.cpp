/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 15:14:48 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Messages.hpp"
#include "Colours.hpp"
#include <iostream>
#include <string>

void	announceTest(std::string const &str)
{
	std::cout << BBLK << BAL << RST << std::endl;
	std::cout << BGRN << "[" << GRN << str << BGRN << "]" << RST << std::endl;
}

void	announceTestType(std::string const &type)
{
	std::cout << BBLK << BAL << RST << std::endl;
	std::cout << BGGRN << BLK << "\t" << type << " TESTS\t" << RST << RST
		<< std::endl;
	return ;
}

void	announce(std::string const &str)
{
	std::cout << BMAG << "\n[" << RED << str << BMAG << "]" << std::endl;
	std::cout << BBLK << "-" << RST << std::endl;
}

void	announceConstructor(const std::string &type)
{
	std::cout << CYN << type << " defualt constructor has been called." << RST 
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
	std::cout << BMAG << type << "AMateria type constructor has been called."
	   	<< RST << std::endl;
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
