/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixedpoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:41:38 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/10 17:32:11 by pwhittin         ###   ########.fr       */
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
		Fixed(const Fixed &src); //copy constructor
		~Fixed();
		
		Fixed 	&operator=(const Fixed &src); //overload thingie
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
