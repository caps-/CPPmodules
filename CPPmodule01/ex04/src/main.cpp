/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:27:43 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 19:29:44 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"


/*int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (!argv[2][0] || !argv[3][0])
			std::cerr << RED << ST01 << std::endl;
		else
			ft_sed(argv[1], argv[2], argv[3]);
	}
	else
		std::cerr << YEL << ST02 << RST << std::endl;
	return (0);
}*/

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		if (argc == 1)
			std::cout << YEL << ST02 << RST << std::endl;
		else if (argc == 2 || argc == 3)
			std::cout << RED << ST01 << std::endl;
	}
	else
		ft_sed(argv[1], argv[2], argv[3]);
	return (0);
}
