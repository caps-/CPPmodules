/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:44:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 18:02:10 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::_debug()
{
	std::cout << YEL << "[DEBUG] ";
	std::cout << MAG << MSG_D  << RST << std::endl;
}

void	Harl::_info()
{
	std::cout << YEL << "[INFO] ";
	std::cout << MAG << MSG_I  << RST << std::endl;
}

void	Harl::_warning()
{
	std::cout << YEL << "[WARNING] ";
	std::cout << MAG << MSG_W  << RST << std::endl;
}

void	Harl::_error()
{
	std::cout << YEL << "[ERROR] ";
	std::cout << MAG << MSG_E  << RST << std::endl;
}
void	Harl::complain(std::string level)
{
	int			index = -1;
	std::string lvl[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
		{
			index = i;
			break ;
		}
	}
	std::cout << B_BLK << BAL << RST << std::endl;
	switch(index)
	{
		case 0:
			this->_debug();
			index++;
		case 1:
			this->_info();
			index++;
		case 2:
			this->_warning();
			index++;
		case 3:
			this->_error();
			break;
		default:
			std::cout << MSG_DEF << std::endl;
	}
	return ;
}
