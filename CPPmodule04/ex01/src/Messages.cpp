/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 01:49:08 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Messages.hpp"
#include "Colours.hpp"

void	announceTest(std::string const &str)
{
	std::cout << BBLK << BAL << RST << std::endl;
	std::cout << BYEL << "[" << YEL << str << BYEL << "]" << RST << std::endl;
}

void	announce(std::string const &str)
{
	std::cout << BMAG << "\n[" << MAG << str << BMAG << "]" << std::endl;
	std::cout << BBLK << "-" << RST << std::endl;
}

void	bigAssLine(void)
{
	std::cout << BBLK << BAL << RST << std::endl;
}
