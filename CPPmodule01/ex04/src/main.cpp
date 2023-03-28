/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:27:43 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 19:01:38 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"


int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!argv[2][0] || !argv[3][0])
				std::cout << RED << ST01 << std::endl;
		else
		{
			ft_sed(argv[1], argv[2], argv[3]);
		}
	}
	else
		std::cout << YEL << ST02 << RST << std::endl;
	
	return (0);
}
