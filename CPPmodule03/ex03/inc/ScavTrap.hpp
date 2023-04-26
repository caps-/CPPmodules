/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 18:24:54 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/25 19:10:52 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP

class	ScavTrap : public ClapTrap //inheriting from ClapTrap
{
	private:
		//nothing
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap();

		ScavTrap &operator=(ClapTrap const &src);
		
		void	attack(std::string &target);
		void	guardGate();
};

#endif
