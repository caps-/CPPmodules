/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:41:38 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 16:34:28 by pwhittin         ###   ########.fr       */
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
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
	
	public:
		Fixed();
		Fixed(const Fixed &f1); //copy constructor
		Fixed(const int integer);
		Fixed(const float fp);
		~Fixed();
		
		Fixed 	&operator=(const Fixed &f2); //overload thingie
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const; //convert fixed point val to float
		int		toInt(void) const; //convert fixed point to int

};

/* Overloaded stream insertion operator */
std::ostream	&operator<<(std::ostream &stream, Fixed const &f1);

#endif
