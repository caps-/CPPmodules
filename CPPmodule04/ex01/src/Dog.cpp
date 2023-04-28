/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:21:22 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 04:31:47 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>

/* Trying to get in to the habit of using return ; to immediately exit the
 * funciton. Just seems like good practice. */
Dog::Dog(void) : Animal()
{
	announceConstructor("Dog");
	this->_type = "Dog";

	return ;
}

Dog::Dog(Dog const &src) : Animal()
{
	announceCopy("Dog");
    *this = src;

	return ;
}

Dog::~Dog(void)
{
	announceDestructor("Dog");

	return ;
}

Dog &Dog::operator=(Dog const &src)
{
	announceDeep("Dog");
    if (this != &src)
        this->_type = src._type;
    
	return (*this);
}

void    Dog::makeSound(void) const
{
	animalSound("dog");
	
	return ;
}
