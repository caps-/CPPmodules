/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:31:15 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 17:57:07 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SED_HPP
# define FT_SED_HPP

# include <iostream>
# include <string>
# include <fstream>

/* Colours for the output. */
# define RST   "\033[0m" //reset colour
# define RED   "\033[31m"
# define GRN   "\033[32m"
# define YEL   "\033[33m"

/* Big ass line */
# define BAL	"-----------------------------------------------------------"

/* Messages to print */
# define ST01 "Error: Must include a string to replace and a replacement for it."
# define ST02 "Usage: ./ft_sed <filename> <string to replace> <replacement string>"
# define ST03 "Error: can't open the input file. New one written anyway."
# define ST04 "Done, changes have been written to a new file called "
# define ST05 ".replace."

int	ft_sed(std::string filename, std::string s1, std::string s2);

#endif
