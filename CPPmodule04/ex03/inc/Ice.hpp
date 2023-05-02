/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pwhittin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:45:15 by pwhittin          #+#    #+#             */
/*   Updated: 2023/05/02 18:53:26 by pwhittin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice(void);
		Ice(Ice const &src); //might need to change to (const Ice &src)
		virtual	~Ice(void);

		Ice	&operator=(Ice const &src);
		
		virtual AMateria	*clone(void) const;
		virtual void		use(ICharacter &target);
};

#endif
