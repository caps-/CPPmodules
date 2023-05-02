/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:36:51 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 20:03:18 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Colours.hpp"
#include "Messages.hpp"
#include <iostream>

void	testSource(void)
{
	announceTest("MateriaSource Test");
	//
	MateriaSource *source = new MateriaSource();
	source->learnMateria(NULL);
	delete source;
}

int	main(void)
{
	testSource();

	return (0);
}
