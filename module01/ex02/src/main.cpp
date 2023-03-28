/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:32:17 by pwhittin          #+#    #+#             */
/*   Updated: 2023/03/22 15:40:28 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>
#include <string>

/* Messages */
# define MSG01 "The memory address of the string variable: "
# define MSG02 "The memory address held by stringPTR     : "
# define MSG03 "The memory address held by stringREF     : "
# define MSG04 "The value of the string variable         : "
# define MSG05 "The value pointed to by stringPTR        : "
# define MSG06 "The value pointed to by stringREF        : "

/* Big ass line */
# define BAL "----------------------------------------------------------------"

/* My shit gotta be at least a little bit pretty */
# define YEL   "\033[33m" 
# define WHT   "\033[37m"
# define B_BLK "\033[1m\033[30m"
# define RST   "\033[0m"

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string &stringREF = string;

	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << MSG01 << WHT << &string << RST << std::endl;
	std::cout << YEL << MSG02 << WHT << stringPTR << RST << std::endl;
	std::cout << YEL << MSG03 << WHT << &stringREF << RST << std::endl;
	std::cout << B_BLK << BAL << RST << std::endl;
	std::cout << YEL << MSG04 << WHT << string << RST << std::endl;
	std::cout << YEL << MSG05 << WHT << *stringPTR << RST << std::endl;
	std::cout << YEL << MSG06 << WHT << stringREF << RST << std::endl;
	std::cout << B_BLK << BAL << RST << std::endl;

	return (0);
}
