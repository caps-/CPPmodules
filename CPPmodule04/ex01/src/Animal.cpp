/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:37:21 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 03:34:53 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

Animal::Animal(void) : _type("Unknown")
{
	announceConstructor("unknown");
	return ;
}

Animal::Animal(Animal const &src) 
{
	std::cout << CYN << "Animal copy constructor has been called." << RST
		<< std::endl;
	*this = src;
	return ;
}

Animal::~Animal(void)
{
	std::cout << BBLK << "Animal destructor has been called." << RST
		<< std::endl;
	return ;
}

Animal::Animal(std::string const &type) : _type(type)
{
	std::cout << CYN << "Animal type copy constructor has been called." << RST
		<< std::endl;
	return ;
}

Animal &Animal::operator=(Animal const &src)
{
	std::cout << CYN <<  "Animal assignment operator has been overloaded."
		<< RST << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}


std::string const	&Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << GRN << "<" << this->_type << "> " << WHT << "*random noises*"
		<< RST << std::endl;
	return ;
}
