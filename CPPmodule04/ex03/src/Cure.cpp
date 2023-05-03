/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:13:41 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 16:02:30 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>

Cure::Cure(void) : AMateria("cure")
{
	announceConstructor("Cure");
	return ;
}

Cure::Cure(Cure const &src) : AMateria("cure")
{
	announceCopy("Cure");
	*this = src;
	return ;
}

Cure::~Cure(void)
{
	announceDestructor("Cure");
	return ;
}

Cure	&Cure::operator=(Cure const &src)
{
	announceDeep("Cure");
	this->_type = src._type;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	AMateria	*cureClone = new Cure();
	return (cureClone);
}

void	Cure::use(ICharacter &target)
{
	std::string const n = target.getName();
	announceUseCure(n);
}
