/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 03:10:04 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 04:21:41 by pwhittin         ###   ########.fr       */
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
		this->ideas[i] = src.ideas[i];
	return (*this);
}
