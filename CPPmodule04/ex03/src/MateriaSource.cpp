/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:31:09 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 15:57:05 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Colours.hpp"
#include "MateriaSource.hpp"
#include "Messages.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource ctor called" << std::endl;
	this->initTemplates();
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	std::cout << "MateriaSource copy ctor called" << std::endl;
	this->initTemplates();
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource dtor called" << std::endl;
	this->deleteTemplates();
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	std::cout << "MateriaSource op overoad called" << std::endl;
	this->deleteTemplates();
	for (int i = 0; i < 4; i++)
	{
		if (src._templates[i] = NULL)
			this->_templates[i] = src._templates[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria*)
{
	
}
