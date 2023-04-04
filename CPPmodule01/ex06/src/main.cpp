/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:16:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 16:08:16 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl		harl;

	if (argc != 2)
	{
		std::cout << B_BLK << BAL << std::endl;
		std::cout << MAG << MSG_USE  << RST << std::endl 
			<< CYN << MSG_LVL << RST << std::endl;
		return (0);
	}

	harl.complain(argv[1]);
	return (0);
}
