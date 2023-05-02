/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:55:10 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 15:06:59 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"
# include <string>

class Character : public ICharacter
{
	private:
		std::string			_name;
		AMateria			*_inventory[4];

		void				_initInventory(void);
		void				_clearInventory(void);

	public:
		Character(void);
		Character(Character const &src);
		Character(std::string const &name);
		~Character(void);

		Character	&operator=(Character const &src);

		std::string	const	&getName(void) const;
		void				setName(std::string const &name);
//		void				equip(AMateria *m);
//		void				unequip(int idx);
//		void				use(int idx, ICharater &target);
//		void				showInventory(void) const;
};

#endif
