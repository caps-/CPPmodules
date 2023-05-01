/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 03:10:04 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/01 12:21:09 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

Brain::Brain(void)
{
	announceConstructor("Brain");
	return ;
}

Brain::Brain(Brain const &src)
{
	announceCopy("Brain");
	*this = src;
	return ;
}

Brain::~Brain(void)
{
	announceDestructor("Brain");
	return ;
}

Brain &Brain::operator=(Brain const &src)
{
	announceDeep("Brain");
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

std::string const	&Brain::getIdea(int i) const
{
	return (this->_ideas[i % (100 -1)]);
}

void	Brain::setIdea(int i, std::string const &idea)
{
	this->_ideas[i % (100 - 1)] = idea;
	return ;
}
