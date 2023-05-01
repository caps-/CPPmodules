/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:45:22 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 18:50:47 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colours.hpp"
#include <iostream>
#include <string>

Character::Character(void) : _name("Unnamed")
{
	announceConstructor("Unamed");
	//this->_initInventory();
	return ;
}

Character::Character(Character const &src)
{
	announceCopy("Character");
	//this->initInventory();
	*this = src;
	retunr ;
}

Character::Character(std::string const &name) : _name(name)
{
}
