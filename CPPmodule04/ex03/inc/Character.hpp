/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:05:29 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 18:53:02 by pwhittin         ###   ########.fr       */
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
		std::string	_name;
		AMateria	*_inventory[4];

		void		_initInventory(void);
		void		_deleteInventory(void);

	public:
		Character(void);
		Character(Character const &src);
		Character(std::string const &name);
		~Character(void);

		Character &operator=(Character const &src);

		std::string	const &getName(void) const;
		void		equip(AMateria *m);
		void		unequip(int index);
		void		use(int index, ICharacter &target);
//		void		showInventory(void) const;
};

#endif
