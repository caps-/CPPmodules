/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 16:27:43 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/28 16:58:12 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sed.hpp"

int	main(void)
{
	std::string	filename, s1, s2;

	std::cout << YEL <<  ST01 << RST;
	std::cin >> filename;
	std::cout << yel << st02 << RST;
	std::cin << s1;
	std::cout << yel << st03 << RST;
	std::cin << s2;

	ft_sed(filename, s1, s2);
}
