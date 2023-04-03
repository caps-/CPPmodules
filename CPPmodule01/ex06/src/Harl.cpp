/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:44:05 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/03 16:18:38 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->fptr[0] = &Harl::debug;
	this->fptr[1] = &Harl::info;
	this->fptr[2] = &Harl::warning;
	this->fptr[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug()
{
	std::cout << YEL << "[DEBUG] ";
	std::cout << MAG << MSG_D  << RST << std::endl;
}

void	Harl::info()
{
	std::cout << YEL << "[INFO] ";
	std::cout << MAG << MSG_I  << RST << std::endl;
}

void	Harl::warning()
{
	std::cout << YEL << "[WARNING] ";
	std::cout << MAG << MSG_W  << RST << std::endl;
}

void	Harl::error()
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
