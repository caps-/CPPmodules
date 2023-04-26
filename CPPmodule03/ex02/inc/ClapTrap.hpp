/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:32:57 by pwhittin          #+#    #+#             */
/*   Updated: 2023/04/25 20:35:56 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap
{
	protected:
		std::string				_name;
		unsigned int			_HP;
		unsigned int			_EP;
		unsigned int			_AD;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap();
		
		//overloading = operator
		ClapTrap &operator=(ClapTrap const &src);
	
		/*/getters
		std::string		getName(void);
		unsigned int	getHP(void);
		unsigned int	getEP(void);
		unsigned int	getAD(void);*/
		void			setEP(unsigned int amount);

		//other member functions
		void		attack(const std::string &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		//ScavTrap gets their own special function here
		void		guardGate();
};

#endif
