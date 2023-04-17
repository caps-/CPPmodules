/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:42:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/17 15:35:22 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixedpoint.hpp"

/* Constructors and destructors */
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << MAG << "Default Constructor called." << RST << std::endl;
	return;
}

Fixed::Fixed(const Fixed &f1)
{
	std::cout << CYN << "Copy Constructer called." << RST << std::endl;
	*this = f1;
}

Fixed::~Fixed() 
{
	std::cout << YEL << "Default Destructor called." << RST << std::endl;
}

/* Operators */
Fixed	&Fixed::operator=(const Fixed &f2)
{
	std::cout << CYN << "Copy assignment operator called." << RST << std::endl;
	this->setRawBits(f2.getRawBits());
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

//new stuff added for this exercise
Fixed::Fixed(const int integer)
{
	std::cout << MAG << "Int constructor called." << std::endl;
	this->_fixedPointValue = (integer << Fixed::_fractionalBits);
}

Fixed::Fixed(const float fp)
{
	std::cout << MAG << "Float constructor called." << std::endl;
	this->_fixedPointValue = roundf(fp * (1 << Fixed::_fractionalBits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (float)(1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> Fixed::_fractionalBits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &f1)
{
	stream << f1.toFloat();
	return (stream);
}
