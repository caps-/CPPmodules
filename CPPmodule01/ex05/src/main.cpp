/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 06:16:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/03 16:10:53 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << B_BLK << BAL << RST << std::endl;	
	harl.complain("debug");
	harl.complain("info");
	harl.complain("warning");
	harl.complain("error");
	std::cout << B_BLK << BAL << RST << std::endl;	

	return(0);
}
