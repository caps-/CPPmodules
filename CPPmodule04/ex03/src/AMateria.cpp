/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:47:53 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 18:57:01 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void) : _type("Default")
{
	announceConstructor("Default");
	return ;
}

AMateria::AMateria(AMateria const &src) : _type(src._type)
{
	announceCopy("AMateria");
	return ;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	announceType("AMateria");
	return ;
}

AMateria::~AMateria(void)
{
	announceDestructor("AMateria");
	return ;
}

AMateria &AMateria::operator=(AMateria const &src)
{
	announceDeep("AMateria");
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "unkown materia used against " << target.getName()
		<< std::endl;
}
