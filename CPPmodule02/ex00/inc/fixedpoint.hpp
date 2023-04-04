/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fixedpoint.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:41:38 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 19:03:31 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXEDPOINT_HPP
# define FIXEDPOINT_HPP

/* Pretty colours */
# define RST   "\033[0m" //reset colour
# define BLK   "\033[30m"
# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"
# define BLU   "\033[34m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define B_BLK "\033[1m\033[30m" //bold colours
# define b_RED "\033[1m\033[31m"
# define b_GRN "\033[1m\033[32m"
# define b_YEL "\033[1m\033[33m"
# define b_BLU "\033[1m\033[34m"
# define b_MAG "\033[1m\033[35m"
# define b_CYN "\033[1m\033[36m"
# define b_WHT "\033[1m\033[37m"

/* Big ass line  */
# define BAL	"-----------------------------------------------------------"

class	Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &f); //f for fixed? Is this how it works?
		~Fixed();

	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
}

#endif
