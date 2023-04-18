/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:41:38 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/18 14:24:45 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
# define FIXEDPOINT_HPP

#include <iostream>

/* Pretty colours */
# define RST   "\033[0m" //reset colour
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"

class	Fixed
{
	private:
		int					_FixedPointValue;
		static const int	_bits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &f1); //copy constructor
		Fixed(const int integer);
		Fixed(const float fp);
		~Fixed();
		
		Fixed 	&operator=(const Fixed &f2); //overload thingie
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const; //convert Fixed point val to float
		int		toInt(void) const; //convert Fixed point to int
	
		//comparison operators
		bool	operator>(Fixed const &f1) const;
		bool	operator<(Fixed const &f1) const;
		bool	operator>=(Fixed const &f1) const;
		bool	operator<=(Fixed const &f1) const;
		bool	operator==(Fixed const &f1) const;
		bool	operator!=(Fixed const &f1) const;

		//arithmetic operators
		Fixed	operator+(Fixed const &f1);
		Fixed	operator-(Fixed const &f1);
		Fixed	operator*(Fixed const &f1);
		Fixed	operator/(Fixed const &f1);

		//increment and decrement operators, pre and post
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);

		//more overloaded member functions
		static	Fixed const &min(Fixed const &a, Fixed const &b);
		static	Fixed const &max(Fixed const &a, Fixed const &b);
		static	Fixed &min(Fixed &a, Fixed &b);
		static	Fixed &max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f1);

#endif
