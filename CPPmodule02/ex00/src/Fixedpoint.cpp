/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:42:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 14:54:16 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixedpoint.hpp"

/* Constructors and destructors */
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << MAG << "Default Constructor called." << RST << std::endl;
	return;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << CYN << "Copy Constructer called." << RST << std::endl;
	this->setRawBits(src.getRawBits());
}

Fixed::~Fixed() 
{
	std::cout << YEL << "Default Destructor called." << RST << std::endl;
}

/* Operators */
Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << YEL << "Copy assignment operator called." << RST << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

/* Getter and setter */
int	Fixed::getRawBits(void) const
{
	std::cout << GRN << "getRawBits member function called." << RST << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << GRN << "setRawBits member function called." << RST << std::endl;
	this->_fixedPointValue = raw;
}
