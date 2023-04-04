/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:03:19 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 16:09:52 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

/* Colours for the output. */
# define RST   "\033[0m" //reset colour
# define YEL   "\033[33m"
# define MAG   "\033[35m"
# define CYN   "\033[36m"
# define WHT   "\033[37m"
# define B_BLK "\033[1m\033[30m" //bold colours

# define MSG_D "Something about extra bacon and burgers idk"
# define MSG_I "More bacon blah blah"
# define MSG_W "Give free bacon please"
# define MSG_E "Unacceptable!"
# define MSG_DEF "[ Probably complaining about insignificant problems ]"
# define MSG_USE "Usage: ./harlFilter <level>"
# define MSG_LVL "Levels: DEBUG - INFO - WARNING - ERROR"

/* Big ass line */
# define BAL	"-----------------------------------------------------------"

class Harl
{
	private:
		void	_debug(void);
		void	_info(void);
		void	_warning(void);
		void	_error(void);
//		void	(Harl::*fptr[4])(void); //array of pointers to member funcs

	public:
		Harl();
		~Harl();

		void		complain(std::string level);
		std::string array[4];
};

#endif
