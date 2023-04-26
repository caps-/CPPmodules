/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:46:28 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/26 15:17:04 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <string> //maybe delete

class	DiamondTrap : public FragTrap, public ScavTrap //multiple inheritance!
{
	private:
		std::string	_name;

	protected:
		DiamondTrap(void);

	public:
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &src);
		~DiamondTrap(void);

		DiamondTrap &operator=(DiamondTrap const &src);

		void	whoAmI(void);

		using	ScavTrap::attack;
};

#endif
