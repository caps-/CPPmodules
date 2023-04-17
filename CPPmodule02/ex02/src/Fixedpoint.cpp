/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 16:42:48 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/17 17:04:08 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixedpoint.hpp"

/* Constructors and destructors */
Fixed::Fixed() : _FixedPointValue(0)
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
	return (this->_FixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << GRN << "setRawBits member function called." << RST << std::endl;
	this->_FixedPointValue = raw;
}

Fixed::Fixed(const int integer)
{
	std::cout << MAG << "Int constructor called." << std::endl;
	this->_FixedPointValue = (integer << Fixed::_bits);
}

Fixed::Fixed(const float fp)
{
	std::cout << MAG << "Float constructor called." << std::endl;
	this->_FixedPointValue = roundf(fp * (1 << Fixed::_bits));
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_FixedPointValue / (float)(1 << Fixed::_bits));
}

int	Fixed::toInt(void) const
{
	return (this->_FixedPointValue >> Fixed::_bits);
}

std::ostream &operator<<(std::ostream &stream, Fixed const &f1)
{
	stream << f1.toFloat();
	return (stream);
}

/* Operator stuff added for this exercise starting with comparison operators */
bool	Fixed::operator>(Fixed const &f1) const
{
	if (this->_FixedPointValue > f1.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &f1) const
{
	if (this->_FixedPointValue < f1.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &f1) const
{
	if (this->_FixedPointValue >= f1.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &f1) const
{
	if (this->_FixedPointValue >= f1.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &f1) const
{
	if (this->_FixedPointValue == f1.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &f1) const
{
	if (this->_FixedPointValue != f1.getRawBits())
		return (true);
	return (false);
}

/* Arithmetic operators */
Fixed	Fixed::operator+(Fixed const &f1)
{
	this->_FixedPointValue += f1.getRawBits();
	return (*this);
}

Fixed	Fixed::operator-(Fixed const &f1)
{
	this->_FixedPointValue -= f1.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(Fixed const &f1)
{
	this->_FixedPointValue = (this->toFloat() * f1.toFloat()) * (1 << _bits);
	return (*this);
}
Fixed	Fixed::operator/(Fixed const &f1)
{
	this->_FixedPointValue = (this->toFloat() / f1.toFloat()) * (1 << _bits);
	return (*this);
}
/* Post increment */
Fixed	Fixed::operator++(void)
{
	this->_FixedPointValue++;
	return (*this);
}

/* Pre increment */
Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++(*this);
	return (temp);
}

/* Post decrement */
Fixed	Fixed::operator--(void)
{
	this->_FixedPointValue--;
	return (*this);
}

/* Pre decrement */
Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

/* Return reference to smallest of two constant fixed point numbers */
Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

/* Return refence to smallest of two fixed point numbers*/
Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

/* Return reference to greatest of two constant fixed point numbers */
Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

/* Return refence to greatest of two fixed point numbers*/
Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}
