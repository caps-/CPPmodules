/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 15:44:56 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/21 18:01:05 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Construct0r */
Zombie::Zombie()
{
	std::cout << YEL << MSG03 << RST << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << WHT << this->_name << MSG04 << RST << std::endl;
}

/* Some sort of destructor function */
Zombie::~Zombie(void)
{
	std::cout << YEL << this->_name << ": " << RED << MSG02 << RST << std::endl;
}

/* Do his whole announce thing */
void	Zombie::announce(void)
{
	std::cout << YEL << this->_name << ": " << GRN << MSG01 << RST << std::endl;
}
