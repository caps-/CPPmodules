/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 19:26:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/21 20:25:50 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Remember, because these are constructors and destructors they'll get called
 * whenever a zombie is created or destroyed. */
Zombie::Zombie()
{
	std::cout << MAG << MSG01 << RST << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << WHT << this->_name << MSG02 << RST << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << YEL << this->_name << ": " << RED << MSG03 << RST << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << YEL << this->_name << ": " << GRN << MSG04 << RST << std::endl;
}
