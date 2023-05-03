/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 20:13:35 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 16:56:19 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>
#include <string>
/* Trying to get in to the habit of using return ; to immediately exit the
* funciton. Just seems like good practice. */

Cat::Cat(void) : Aanimal(), _brain(new Brain())
{
	announceConstructor("Cat");
	this->_type = "Cat";

	return ;
}

Cat::Cat(Cat const &src) : Aanimal(), _brain()
{
	announceCopy("Cat");
    *this = src;
    
	return ;
}

Cat::~Cat(void)
{
	announceDestructor("Cat");
	delete this->_brain;

    return ;
}

Cat &Cat::operator=(Cat const &src)
{
	announceDeep("Cat");
    if (this != &src)
	{
        this->_type = src._type;
		if (this->_brain != NULL)
			delete(this->_brain);
		this->_brain = new Brain(*src._brain);
	}
    return (*this);
}

void	Cat::makeSound(void) const
{
	animalSound("cat");
	return ;
}

Brain *Cat::getBrain(void) const
{
	return (this->_brain);
}
