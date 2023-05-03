/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:19:16 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/03 15:16:06 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

MateriaSource::MateriaSource(void)
{
	announceConstructor("MateriaSource");
	this->_initTechniques();
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	announceCopy("MateriaSource");
	this->_initTechniques();
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	announceDestructor("MateriaSource");
	this->_deleteTechniques();
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &src)
{
	announceDeep("MateriaSource");
	this->_deleteTechniques();
	for (int i = 0; i < 4; i++)
	{
		if (src._techniques[i] != NULL)
			this->_techniques[i] = src._techniques[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_techniques[i] == NULL)
		{
			this->_techniques[i] = m;
			std::string const mat = m->getType();
			announceLearned(mat);
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_techniques[i] && this->_techniques[i]->getType() == type)
		{
		/*	std::cout << "MateriaSource learning the " << type
				<< " technique!" << std::endl;*/
//			std::string const t = type();
			announceLearning(type);
			return (this->_techniques[i]->clone());
		}
	}
	return (NULL);
}

void	MateriaSource::_initTechniques(void)
{
	for (int i = 0; i < 4; i++)
		this->_techniques[i] = NULL;
	return ;
}

void	MateriaSource::_deleteTechniques(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_techniques[i] != NULL)
		{
			delete this->_techniques[i];
			this->_techniques[i] = NULL;
		}
	}
	return ;
}
