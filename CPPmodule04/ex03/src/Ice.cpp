/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:07:49 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 19:03:19 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>

Ice::Ice(void) : AMateria("ice")
{
	announceConstructor("Ice");
	return ;
}

Ice::Ice(Ice const &src)
{
	announceCopy("Ice");
	*this = src;
	return ;
}

Ice::~Ice(void)
{
	announceDestructor("Ice");
	return ;
}

Ice	&Ice::operator=(Ice const &src)
{
	announceDeep("Ice");
	this->_type = src._type;
	return (*this);
}

AMateria	*Ice::clone(void) const
{
	AMateria	*iceClone = new Ice();
	return (iceClone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << BBLU << "shoots ice at " << target.getName() << RST
		<< std::endl;
}
