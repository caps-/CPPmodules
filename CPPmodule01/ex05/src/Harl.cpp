/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:44:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 16:12:13 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->fptr[0] = &Harl::_debug;
	this->fptr[1] = &Harl::_info;
	this->fptr[2] = &Harl::_warning;
	this->fptr[3] = &Harl::_error;
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
	std::string lvl[4] = {"debug", "info", "warning", "error"};

	for (int i = 0; i < 4; i++)
	{
		if (lvl[i] == level)
			(this->*fptr[i])();
	}
}
