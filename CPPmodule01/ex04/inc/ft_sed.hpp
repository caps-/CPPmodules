/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:31:15 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 19:02:14 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SED_HPP
# define FT_SED_HPP

# include <iostream>
# include <string>
# include <fstream>

/* Colours for the output. */
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

/* Big ass line */
# define BAL	"-----------------------------------------------------------"

/* Messages to print */
# define ST01 "Error: Must include a string to replace and a replacement for it."
# define ST02 "Usage: ./ft_sed <filename> <string to replace> <replacement string>"
# define ST03 "Error: can't open the input file. New one written anyway."
# define ST04 "Done, changes have been written to a new file called "
# define ST05 ".replace."

void	ft_sed(std::string filename, std::string s1, std::string s2);

#endif
