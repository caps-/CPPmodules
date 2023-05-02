/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 14:41:50 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 16:12:47 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

# include "AMateria.hpp"
# include <string>

class AMateria;

class ICharacter
{
	public:
		virtual	~ICharacter(void) {}

		virtual std::string const 	&getName(void) const = 0;
		virtual void	equip(AMateria * m) = 0;
		virtual void	unequip(int idx) = 0;
		virtual	void	use(int index, ICharacter &target) = 0;	
};

#endif
