/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 16:55:59 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Messages.hpp"
#include "Colours.hpp"

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
	if (type == "Cat" || type == "Dog")
	{
		std::cout << CYN << type << " defualt constructor has been called." 
			<< RST << std::endl;
	}
	else
	{
		std::cout << BLU << "Animal default constructor has been called." 
			<< RST << std::endl;
	}
	return ;
}

void	announceCopy(const std::string &type)
{
	if (type == "Cat" || type == "Dog")
	{
		std::cout << BMAG << type << " copy constructor has been called." 
			<< RST << std::endl;
	}
	else
	{
		std::cout << BMAG << "Blank Animal constructor has been called." 
			<< RST << std::endl;
	}
	return ;

}

void	announceDeep(const std::string &type)
{
	if (type == "Cat" || type == "Dog")
	{
		std::cout << MAG << type << " has been deep copied. DEEEEEEEEP." 
			<< RST << std::endl;
	}
	else
	{
		std::cout << MAG << "Blank Animal has been deep copied. DEEEEEEEP." 
			<< RST << std::endl;
	}
	return ;

}

void	announceDestructor(const std::string &type)
{
	if (type == "Cat" || type == "Dog")
	{
		std::cout << BBLK << type << " destructor has been called." 
			<< RST << std::endl;
	}
	if (type == "Brain")
	{
		std::cout << BBLK "Brain destructor has been called." 
			<< RST << std::endl;
	}
	else
	{
		std::cout << BBLK << "Unknown Animal destructor has been called.." 
			<< RST << std::endl;
	}
	return ;

}

void	animalSound(const std::string &type)
{
	if (type == "Cat")
	{
		std::cout << YEL "<" << BYEL << type << YEL "> " << RST 
			<< "meeooOo0w!" << std::endl;
	}
	else
	{
		std::cout << YEL "<" << BYEL << type << YEL "> " << RST
			<< "arf! w00f!" << std::endl;
	}
}

void	announceIdea(const std::string &type, const std::string &idea)
{
	std::cout << YEL << "<" << BYEL << type << YEL << "> " << RST  << idea 
		<< std::endl;
}

void	bigAssLine(void)
{
	std::cout << BBLK << BAL << RST << std::endl;
}
