/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Messages.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <pwhittin@student.42adel.org.au>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 23:45:55 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/29 02:42:58 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
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

void	animalSound(const std::string &type)
{
	std::string	animal = type;
	std::string cat = "cat";
	int	res = type.compare(cat);

	if (res == 0)
	{
		std::cout << YEL << "<" << BYEL << "Dog" << YEL "> " << RST << "arf! w00f!"
			<< std::endl;
	}
	else
	{
		std::cout << YEL << "<" << BYEL << "Cat" << YEL "> " << RST << "meeooOo0w!"
			<< std::endl;
	}
}

void	bigAssLine(void)
{
	std::cout << BBLK << BAL << RST << std::endl;
}
