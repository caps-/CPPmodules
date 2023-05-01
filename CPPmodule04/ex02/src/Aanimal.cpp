/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:37:21 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 15:22:39 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

Aanimal::Aanimal(void) : _type("Blank")
{
	announceConstructor("Blank");
	return ;
}

Aanimal::Aanimal(Aanimal const &src) 
{
	std::cout << CYN << "Aanimal copy constructor has been called." << RST
		<< std::endl;
	*this = src;
	return ;
}

Aanimal::~Aanimal(void)
{
	std::cout << BBLK << "Aanimal destructor has been called." << RST
		<< std::endl;
	return ;
}

Aanimal::Aanimal(std::string const &type) : _type(type)
{
	std::cout << CYN << "Aanimal type copy constructor has been called." << RST
		<< std::endl;
	return ;
}

Aanimal &Aanimal::operator=(Aanimal const &src)
{
	std::cout << CYN <<  "Aanimal assignment operator has been overloaded."
		<< RST << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}


std::string const	&Aanimal::getType(void) const
{
	return (this->_type);
}

void	Aanimal::makeSound(void) const
{
	std::cout << GRN << "<" << this->_type << "> " << WHT << "*random noises*"
		<< RST << std::endl;
	return ;
}
