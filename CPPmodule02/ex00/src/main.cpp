/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 18:39:24 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/19 15:53:39 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fixedpoint.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a); //this calls our copy constructor
	Fixed c;
	
	c = b; //this calls our operator assignment operator
	
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}
