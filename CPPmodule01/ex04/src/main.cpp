/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:27:43 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 18:42:29 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

/*int	main(void)
{
	std::string	filename;
	std::string	s1;
	std::string	s2;

	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << ST01 << RST;
	std::cin >> filename;
	std::cout << YEL << ST02 <<  RST;
	std::cin >> s1;
	std::cout << YEL << ST03 << RST;
	std::cin >> s2;

	ft_sed(filename, s1, s2);
}*/

int	main(int argc, char **argv)
{
	std::string	filename;
//	std::string s1 = argv[2];
//	std::string	s2 = argv[3];

	if (argc == 4)
	{
		if (!argv[2][0] || !argv[3][0])
				std::cout << RED << ST01 << std::endl;
		else
		{
			filename = argv[1];
			ft_sed(argv[1], argv[2], argv[3]);
//			std::cout << GRN << ST04 << filename << ST05 << RST << std::endl;
		}
	}
	else
		std::cout << YEL << ST02 << RST << std::endl;
	
	return (0);
}
