/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:03:32 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 16:01:09 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>

AMateria::AMateria(void) : _type("AMateria")
{
	announceConstructor("AMateria");
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
	if (this != &src)
		this->_type = src._type;
	announceDeep("AMateria");
	return (*this);
}

std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

/* Write anounce function for this and figure out how to pass &target to it.
 * Maybe std::string const targetName = target.getName or something? */
void	AMateria::use(ICharacter &target)
{
	std::cout << "*materia is being used against " << target.getName() << "*"
		<< RST << std::endl;
	return ;
}
