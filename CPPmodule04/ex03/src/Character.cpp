/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 17:10:10 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 19:02:07 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>

Character::Character(void) : _name("Unnamed")
{
	announceConstructor("Character");
	this->_initInventory();
	return ;
}

Character::Character(Character const &src)
{
	announceCopy("Character");
	*this = src;
	return ;
}

Character::Character(std::string const &name) : _name(name)
{
	std::cout << RED << "name constructor called, need to make announce func"
		<< RST << std::endl;
	this->_initInventory();
	return ;
}

Character &Character::operator=(Character const &src)
{
	announceDeep("Character");
	if (this != &src)
	{
		this->_name = src._name;
		for (int i = 0; i < 4; i++)
		{
			if (src._inventory[i] != NULL)
				this->_inventory[i] = src._inventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character(void)
{
	announceDestructor("Character");
	this->_deleteInventory();
}

//Getters and Setters
std::string const	&Character::getName(void) const
{
	return (this->_name);
}

//Equip and unequip characters
void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] == NULL)
		{
			this->_inventory[i] = m;
			std::cout << MAG << this->_name << " equipped " << m->getType()
				<< " matieria to inventory slot " << i << RST << std::endl;
			return ;
		}
	}
}

void	Character::unequip(int index)
{
	if (index < 0 || index >= 4)
	{
		std::cout << "can't unequip!" << std::endl;
		return ;
	}
	if (this->_inventory[index] == NULL)
	{
		std::cout << this->_name << ": " << "nothing to unequip in slot "
			<< index << std::endl;
		return ;
	}
	std::cout << GRN << this->_name << " uneqipped " 
		<< this->_inventory[index]->getType() << " materia from slot " << index
		<< std::endl;
	this->_inventory[index] = NULL;
	return ;
}

void	Character::use(int index, ICharacter &target)
{
	if (index < 0 || index > 4)
	{
		std::cout << "can't use that!" << std::endl;
		return ;
	}
	if (this->_inventory[index] != NULL)
	{
		std::cout << this->_name << ": ";
		this->_inventory[index]->use(target);
	}
	return ;
}

//Inventory functions
void	Character::_initInventory(void)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

void	Character::_deleteInventory(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
	return ;
}
