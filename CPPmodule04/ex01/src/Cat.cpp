/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:13:35 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 04:33:55 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>
/* Trying to get in to the habit of using return ; to immediately exit the
* funciton. Just seems like good practice. */

Cat::Cat(void) : Animal(), _brain(new Brain()) 
{
	announceConstructor("Cat");
	this->_type = "Cat";

	return ;
}

Cat::Cat(Cat const &src) : Animal(), _brain();
{
	announceCopy("Cat");
    *this = src;
    
	return ;
}

Cat::~Cat(void)
{
	announceDestructor("Cat");

    return ;
}

Cat &Cat::operator=(Cat const &src)
{
	announceDeep("Cat");
    if (this != &src)
        this->_type = src._type;
    return (*this);
}

void	Cat::makeSound(void) const
{
	animalSound("cat");
	return ;
}
