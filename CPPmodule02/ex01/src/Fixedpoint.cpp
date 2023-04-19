/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:42:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 16:34:24 by pwhittin         ###   ########.fr       */
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

/* Our function to convert fixed point values to floating point values.
 *
 * First thing worth pointing out here is that left shifting by 1 is the same
 * as multiplying by two due to the fact it's a binary operation. Think of the
 * number 5 in base 10 as an example. You shift the 5 one place to the left, in
 * to the 10's 'column' if you will, and you get 50. That's also 5 x 10. So with
 * binary that 10 column is a 2 column, so just as the previous example was 5 x
 * 10, in binary it's n x 2. See what I mean?
 * 
 * Anyway I'm now realising there's WAY too much to type in here as a comment
 * so just check the links in the README (if you got this from github) to
 * understand how this all works. */
float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue / (float)(1 << Fixed::_fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> Fixed::_fractionalBits);
}

/* Overloaded stream insertion operator. Same kinda reason as the last exercise,
 * it just lets us send our own user defined types and objects and shit to the
 * output stream. */
std::ostream &operator<<(std::ostream &stream, Fixed const &f1)
{
	stream << f1.toFloat();
	return (stream);
}
