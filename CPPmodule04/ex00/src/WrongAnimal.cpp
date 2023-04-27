/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:33:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/27 15:43:46 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "Colours.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void) : _type("Wrong Animal")
{
	std::cout << BLU << "WrongAnimal default constructor has been called."
		<< RST << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << CYN << "WrongAnimal copy constructor has been called." << RST
		<< std::endl;
	*this = src;
	return ;
}

WrongAnimal::WrongAnimal(std::string const &type) : _type(type)
{
	std::cout << CYN << "WrongAnimal type copy constructor has been called."
		<< RST << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << B_BLK << "WrongAnimal destructor has been called." << RST
		<< std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &src)
{
	std::cout << YEL << "WrongAnimal assignment operator has been overloaded."
		<< RST << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string const	&WrongAnimal::getType(void) const
{
	return(this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << RED "<" << this->_type << ">" WHT << " fdagkjhfdgkjhadsgl"
		<< RST << std::endl;
	return ;
}
