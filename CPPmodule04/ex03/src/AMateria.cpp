/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:03:32 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 18:43:47 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Colours.hpp"
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

AMateria::AMateria(std::string const &type)
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
	return ;
}

std::string const	&getType(void) const
{
	return (this->_type);
}

/* Write anounce function for this and figure out how to pass &target to it.
 * Maybe std::string const targetName = target.getName or something? */
void	use*(ICharacter &target)
{
	std::cout << "*materia is being used against " << target.getName() << "*"
		<< RST << std::endl
	return ;
}

