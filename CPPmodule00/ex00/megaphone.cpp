/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:07:36 by pwhittin          #+#    #+#             */
/*   Updated: 2023/02/28 17:17:30 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

/* Seems weird, but this is the first time I've fucked with for loops. Pretty
 * straight forward though, it's just for(initialisation; condition; update).
 * If we take the first for loop in this program it's initialising i to 1, then
 * incrementing i for as long as it's less than argc. The second one initialises
 * j to 0, then increments along through argv, converts the current character to
 * uppercase and then moves on to the next one. */
int	main(int argc, char **argv)
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < argc; i++)
			for (int j = 0; argv[i][j]; j++)
				std::cout << (char)toupper(argv[i][j]);
	}
	std::cout << std::endl;
	return (0);
}
