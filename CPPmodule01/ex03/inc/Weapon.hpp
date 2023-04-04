/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 15:54:39 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/04 17:53:59 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

/* Colours for the output. */
# define RST   "\033[0m" //reset colour
# define RED   "\033[31m"

/* Big ass line */
# define BAL	"-----------------------------------------------------------"

/* Putting const aftter the type means that the function is part of a class and 
 * can't change any memberso that class. Const objects can also only call const
 * functions. */
class	Weapon
{
	private:
		std::string	_type;

	public:
		//constructor & destructor
		Weapon(std::string _type);
		~Weapon();
		//setter and getter member functions
		void				setType(std::string type);
		std::string			getType();
};

#endif
