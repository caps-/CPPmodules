/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 00:36:22 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Messages.hpp"
#include "Colours.hpp"

void	announceTest(std::string const &str)
{
	std::cout << BYEL << "\n[" << YEL << str << BYEL << "]\n" << std::endl;
}

void	announce(std::string const &str)
{
	std::cout << BMAG << "\n[" << MAG << str << BMAG << "]\n" << std::endl;
}

void	bigAssLine(void)
{
	std::cout << BBLK << BAL << RST << std::endl;
}
