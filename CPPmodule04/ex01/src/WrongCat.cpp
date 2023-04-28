/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:50:13 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/27 14:46:19 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Colours.hpp"
#include <iostream>

WrongCat::WrongCat(void) : WrongAnimal() //inheriting from WrongAnimal
{
	std::cout << CYN << "WrongCat default constructor has been called." << RST
		<< std::endl;
	this->_type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const &src) : WrongAnimal()
{
	std::cout << CYN << "WrongCat copy constructor has been called." << RST
		<< std::endl;
	*this = src;
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << B_BLK << "WrongCat destructor has been called." << RST
		<< std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &src)
{
	std::cout << YEL << "WrongCat assignment operator has been overloaded."
		<< RST << std::endl;
	if (this != &src)
		this->_type = src._type;
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << YEL << "<" << this->_type << "> " << WHT << " ..oink?" << RST
		<< std::endl;
	return ;
}
