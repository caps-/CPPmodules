/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:42:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 15:53:36 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixedpoint.hpp"

/* Our constructor with an initialiser list to init _fixedPointValue of whatever
 * variable is being made to 0, rather than assigning 0 after it's created. */
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << MAG << "Default Constructor called." << RST << std::endl;
	return;
}

/* Our copy constructor that sets the raw value of the fixed point value to the 
 * copied variable. Copy constructors will copy stuff, but they'll also init a
 * whole new object to copy the stuff in to. */
Fixed::Fixed(const Fixed &src)
{
	std::cout << CYN << "Copy Constructor called." << RST << std::endl;
	this->setRawBits(src.getRawBits());
}

/* Destructor, doing destructy things. */
Fixed::~Fixed() 
{
	std::cout << YEL << "Default Destructor called." << RST << std::endl;
}

/* Overloaded copy assignment operator. Overloading lets use our own, user
 * defined types and objects with operators in pretty much the same way we'd
 * use built in ones like int or char or whatever.
 *
 * We're using the copy assignment operator because we want to copy the vales
 * from one object to another pre-existing one, rather than copying an object
 * in to a brand new one. */
Fixed	&Fixed::operator=(const Fixed &src)
{
	std::cout << YEL << "Copy assignment operator called." << RST << std::endl;
	this->setRawBits(src.getRawBits());
	return (*this);
}

/* Get di ting. */
int	Fixed::getRawBits(void) const
{
	std::cout << GRN << "getRawBits member function called." << RST << std::endl;
	return (this->_fixedPointValue);
}

/* Set di ting. */
void	Fixed::setRawBits(int const raw)
{
	std::cout << GRN << "setRawBits member function called." << RST << std::endl;
	this->_fixedPointValue = raw;
}
