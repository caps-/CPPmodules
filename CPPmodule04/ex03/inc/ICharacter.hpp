/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:19:35 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 15:29:31 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <string>
#include "AMateria.hpp"

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter(void) {}
		virtual	std::string const &getName() const = 0;
		virtual	void equp(AMateria *m) = 0;
		virtual	void unequip(int idx) = 0;
		virtual	void use(int idx, ICharacter &target) = 0;
};

#endif
